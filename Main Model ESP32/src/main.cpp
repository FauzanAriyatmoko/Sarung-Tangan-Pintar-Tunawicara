// Board: ESP32 Dev Module
// Libraries: Adafruit MPU6050, DFRobotDFPlayerMini, TensorFlow Lite Micro
#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include "DFRobotDFPlayerMini.h"

// TensorFlow Lite Micro libraries
#include <TensorFlowLite_ESP32.h>
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "MODEL.h"

// --- Deklarasi Fungsi (Prototipe) ---
char mapClassIDToSIBI(int class_id);
void printDetail(uint8_t type, int value);

// --- Konfigurasi Pin Sensor ---
const int flexPin1 = 36; // Flex1
const int flexPin2 = 39; // Flex2
const int flexPin3 = 34; // Flex3
const int flexPin4 = 35; // Flex4
const int flexPin5 = 32; // Flex5


const int flexPinArray[] = {flexPin5, flexPin4, flexPin3, flexPin2, flexPin1};
const int NUM_FLEX_SENSORS = 5;

Adafruit_MPU6050 mpu;

// --- Konfigurasi DFPlayer Mini ---
#define MP3_RX_PIN 16
#define MP3_TX_PIN 17
HardwareSerial dfpSerial(1);
DFRobotDFPlayerMini myDFPlayer;
bool dfPlayerReady = false;

// --- Variabel Global untuk TensorFlow Lite ---
tflite::MicroErrorReporter micro_error_reporter;
tflite::ErrorReporter* error_reporter = &micro_error_reporter;

const tflite::Model* model = nullptr;
tflite::MicroInterpreter* interpreter = nullptr;
TfLiteTensor* input_tensor = nullptr;
TfLiteTensor* output_tensor = nullptr;

const int TENSOR_ARENA_SIZE = 20 * 1024; 
uint8_t tensor_arena[TENSOR_ARENA_SIZE] __attribute__((aligned(16)));

// --- Parameter Model dan Data ---
const int NUM_FEATURES = 11;
const int NUM_CLASSES = 26; // A hingga Z

float current_sensor_readings[NUM_FEATURES];

const float MEANS[NUM_FEATURES] = {
    1428.4070, 1627.8153, 1347.8956, 1253.6952, 1075.7409, // Flex5 -> Flex1
    0.0590, 0.8313, 0.2896,                                // AccelX, AccelY, AccelZ
    -0.0088, -0.0091, 0.0043                               // GyroX, GyroY, GyroZ
};
const float STD_DEVS[NUM_FEATURES] = {
    222.1246, 281.9704, 246.7781, 179.0070, 270.2374,  // Flex5 -> Flex1
    0.2106, 0.3776, 0.2201,                            // AccelX, AccelY, AccelZ
    0.2350, 0.6496, 0.2731                             // GyroX, GyroY, GyroZ
};

// MPU6050 Offsets (sesuaikan jika perlu berdasarkan kalibrasi Anda)
const float ax_offset = 0.00; const float ay_offset = -0.02; const float az_offset = 0.04;
const float gx_offset = -0.01; const float gy_offset = -0.01; const float gz_offset = 0.00;

// --- Fungsi Setup ---
void setup() {
    Serial.begin(9600);
    while (!Serial) delay(10);
    Serial.println(F("--- SIBI Gesture Recognition (ANN & DFPlayer - Verified) ---"));

    if (!mpu.begin()) {
        Serial.println(F("MPU6050 Gagal!"));
        while (1) delay(10);
    }
    Serial.println(F("MPU6050 OK!"));
    mpu.setAccelerometerRange(MPU6050_RANGE_2_G);
    mpu.setGyroRange(MPU6050_RANGE_250_DEG);
    mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
    delay(100);

    Serial.println(F("Inisialisasi DFPlayer..."));
    dfpSerial.begin(9600, SERIAL_8N1, MP3_RX_PIN, MP3_TX_PIN);
    if (myDFPlayer.begin(dfpSerial, true, false)) {
        Serial.println(F("DFPlayer OK."));
        myDFPlayer.volume(28);
        dfPlayerReady = true;
    } else {
        Serial.println(F("DFPlayer Gagal. Periksa kartu SD & koneksi."));
    }

    model = tflite::GetModel(TA_Model);

    if (model->version() != TFLITE_SCHEMA_VERSION) {
        error_reporter->Report("Versi skema model tidak cocok!");
        return;
    }
    Serial.println(F("Model TFLite dimuat."));

    static tflite::AllOpsResolver resolver;
    static tflite::MicroInterpreter static_interpreter(
        model, resolver, tensor_arena, TENSOR_ARENA_SIZE, error_reporter);
    interpreter = &static_interpreter;

    if (interpreter->AllocateTensors() != kTfLiteOk) {
        error_reporter->Report("AllocateTensors() gagal!");
        return;
    }
    Serial.println(F("Tensor dialokasikan."));

    input_tensor = interpreter->input(0);
    output_tensor = interpreter->output(0);

    Serial.println(F("--- Info Tensor ---"));
    Serial.print(F("Input Tensor Dims Count: ")); Serial.println(input_tensor->dims->size);
    Serial.print(F("Input Tensor Dims: "));
    for (int i = 0; i < input_tensor->dims->size; i++) {
        Serial.print(input_tensor->dims->data[i]); Serial.print(F(" "));
    }
    Serial.println();

    Serial.print(F("Output Tensor Dims Count: ")); Serial.println(output_tensor->dims->size);
    Serial.print(F("Output Tensor Dims: "));
    for (int i = 0; i < output_tensor->dims->size; i++) {
        Serial.print(output_tensor->dims->data[i]); Serial.print(F(" "));
    }
    Serial.println();

    Serial.println(F("Setup selesai."));
    if (dfPlayerReady) myDFPlayer.play(26); // Suara "Sistem Siap" (file 0026.mp3)
}

// --- Fungsi Loop Utama ---
void loop() {
    static int last_predicted_class_id = -1; // Menyimpan prediksi sebelumnya

    // 1. Baca Flex Sensors (Flex5, Flex4, Flex3, Flex2, Flex1)
    current_sensor_readings[0] = (float)analogRead(flexPinArray[0]);
    current_sensor_readings[1] = (float)analogRead(flexPinArray[1]);
    current_sensor_readings[2] = (float)analogRead(flexPinArray[2]);
    current_sensor_readings[3] = (float)analogRead(flexPinArray[3]);
    current_sensor_readings[4] = (float)analogRead(flexPinArray[4]);

    // 2. Baca MPU6050 & Preprocess
    sensors_event_t a_event, g_event, temp_event;
    mpu.getEvent(&a_event, &g_event, &temp_event);

    float ax = (a_event.acceleration.x / 9.80665F) - ax_offset;
    float ay = (a_event.acceleration.y / 9.80665F) - ay_offset;
    float az = (a_event.acceleration.z / 9.80665F) - az_offset;
    float gx = g_event.gyro.x - gx_offset;
    float gy = g_event.gyro.y - gy_offset;
    float gz = g_event.gyro.z - gz_offset;

    current_sensor_readings[5] = ax;
    current_sensor_readings[6] = ay;
    current_sensor_readings[7] = az;
    current_sensor_readings[8] = gx;
    current_sensor_readings[9] = gy;
    current_sensor_readings[10] = gz;

    // 3. Normalisasi Data Sensor (Z-score)
    for (int i = 0; i < NUM_FEATURES; i++) {
        if (fabs(STD_DEVS[i]) > 1e-7) {
            current_sensor_readings[i] = (current_sensor_readings[i] - MEANS[i]) / STD_DEVS[i];
        } else {
            current_sensor_readings[i] = (current_sensor_readings[i] - MEANS[i]);
        }
    }

    // 4. Salin data ke tensor input
    for (int i = 0; i < NUM_FEATURES; i++) {
        input_tensor->data.f[i] = current_sensor_readings[i];
    }

    // 5. Jalankan inferensi
    if (interpreter->Invoke() != kTfLiteOk) {
        error_reporter->Report("Invoke failed!");
        return;
    }

    // 6. Dapatkan output
    int predicted_class_id = -1;
    float max_prob = 0.0f;

    int actual_output_units = output_tensor->dims->data[output_tensor->dims->size - 1];
    if (actual_output_units != NUM_CLASSES) {
        Serial.printf("PERINGATAN: Model output units (%d) TIDAK SAMA dengan NUM_CLASSES (%d)!\n", actual_output_units, NUM_CLASSES);
    }

    for (int i = 0; i < actual_output_units && i < NUM_CLASSES; i++) {
        float current_prob = output_tensor->data.f[i];
        if (current_prob > max_prob) {
            max_prob = current_prob;
            predicted_class_id = i;
        }
    }

    // 7. Tampilkan hasil dan mainkan suara hanya jika prediksi berubah
    if (predicted_class_id != -1) {
        char predicted_char = mapClassIDToSIBI(predicted_class_id);
        Serial.printf("Prediksi: %c (ID: %d, Conf: %.2f%%) ",
                      predicted_char, predicted_class_id, max_prob * 100.0f);

        const float CONFIDENCE_THRESHOLD = 0.50;
        if (dfPlayerReady && max_prob > CONFIDENCE_THRESHOLD) {
            if (predicted_class_id != last_predicted_class_id) {
                int fileToPlay = predicted_class_id + 1;
                myDFPlayer.play(fileToPlay);
                last_predicted_class_id = predicted_class_id;
            }
            Serial.println();
        } else {
            last_predicted_class_id = -1; // Reset jika confidence turun
            Serial.println();
        }
    } else {
        last_predicted_class_id = -1; // Reset jika tidak ada prediksi
        Serial.println("Tidak ada prediksi yang cukup meyakinkan.");
    }

    delay(1000);
}

// --- Fungsi Helper untuk Memetakan ClassID ke Huruf SIBI ---
char mapClassIDToSIBI(int class_id) {
    if (class_id >= 0 && class_id < 26) return (char)('A' + class_id);
    return '?';
}



// --- Fungsi Helper untuk Detail DFPlayer ---
void printDetail(uint8_t type, int value) {
  switch (type) {
    case TimeOut: Serial.println(F("DFPlayer: Time Out!")); break;
    case WrongStack: Serial.println(F("DFPlayer: Stack Wrong!")); break;
    case DFPlayerCardInserted: Serial.println(F("DFPlayer: Card Inserted!")); break;
    default: break;
  }
}