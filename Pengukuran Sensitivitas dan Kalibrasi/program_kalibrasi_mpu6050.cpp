#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

// Offset dari kalibrasi (adjust sesuai dengan perbandingan hasil)
float ax_offset = 0.00; // g
float ay_offset = -0.02;  // g
float az_offset = 0.04; // g
float gx_offset = -0.01;  // rad/s
float gy_offset = -0.01;  // rad/s
float gz_offset = 0.00;  // rad/s

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    delay(100); // Tunggu Serial Monitor terbuka
  }

  // Inisialisasi MPU6050
  if (!mpu.begin()) {
    Serial.println("Gagal menemukan MPU6050!");
    while (1);
  }

  // Konfigurasi sensor
  mpu.setAccelerometerRange(MPU6050_RANGE_2_G);
  mpu.setGyroRange(MPU6050_RANGE_250_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

  // Cetak header CSV sekali di awal
  Serial.println("Accel X(g),Accel Y(g),Accel Z(g),Gyro X(rad/s),Gyro Y(rad/s),Gyro Z(rad/s)");
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Koreksi pembacaan dengan offset
  float corrected_ax = (a.acceleration.x / 9.81) - ax_offset;
  float corrected_ay = (a.acceleration.y / 9.81) - ay_offset;
  float corrected_az = (a.acceleration.z / 9.81) - az_offset;
  float corrected_gx = g.gyro.x - gx_offset;
  float corrected_gy = g.gyro.y - gy_offset;
  float corrected_gz = g.gyro.z - gz_offset;

  // Cetak data dalam satu baris, dipisahkan koma, lalu ke baris baru
  Serial.print(corrected_ax);
  Serial.print(",");
  Serial.print(corrected_ay);
  Serial.print(",");
  Serial.print(corrected_az);
  Serial.print(",");
  Serial.print(corrected_gx);
  Serial.print(",");
  Serial.print(corrected_gy);
  Serial.print(",");
  Serial.println(corrected_gz); // Baris baru setelah nilai terakhir
  delay(200); // Jeda antar pembacaan
}