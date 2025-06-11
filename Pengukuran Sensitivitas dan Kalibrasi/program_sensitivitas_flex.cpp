#include <Arduino.h>

// Definisikan konstanta untuk perataan
const int jumlahPembacaan = 100;           // Jumlah pembacaan untuk dirata-rata
const int jedaAntarPembacaan = 100;        // Jeda antar pembacaan dalam milidetik
const float TeganganInput = 4.44;          // Tegangan input dalam volt (4.44V untuk ESP32)
const float R1 = 10.0;                     // Nilai resistor tetap dalam kOhm

void setup() {
    Serial.begin(115200);  // Inisialisasi Serial dengan baud rate 115200
    delay(1000);
    Serial.println("Pengukuran Resistansi Sensor Fleksibel");
}

void loop() {
    long totalNilaiSensor = 0;     // Variabel untuk menyimpan jumlah nilai sensor
    float totalTegangan = 0.0;     // Variabel untuk menyimpan jumlah nilai tegangan
    float totalResistansi = 0.0;   // Variabel untuk menyimpan jumlah nilai resistansi

    // Lakukan beberapa pembacaan dan jumlahkan
    for (int i = 0; i < jumlahPembacaan; i++) {
        int nilaiSensor = analogRead(36);
        totalNilaiSensor += nilaiSensor;

        // Hitung tegangan untuk setiap pembacaan
        float tegangan = nilaiSensor * (TeganganInput / 4095.0);  // Konversi ke tegangan (0-4.44V)
        totalTegangan += tegangan;

        // Hitung resistansi untuk setiap pembacaan
        if (tegangan > 0) {  // Hindari pembagian dengan nol
            float resistansi = (TeganganInput * R1 / tegangan) - R1; // Hitung resistansi dalam kOhm
            totalResistansi += resistansi;
        }
        delay(jedaAntarPembacaan);
    }

    // Hitung rata-rata
    int rataNilaiSensor = totalNilaiSensor / jumlahPembacaan;
    float rataTegangan = totalTegangan / jumlahPembacaan;
    float rataResistansi = totalResistansi / jumlahPembacaan;

    // Cetak hasilnya
    Serial.print("Nilai Analog (rata-rata): ");
    Serial.print(rataNilaiSensor);
    Serial.print(" | Tegangan (rata-rata): ");
    Serial.print(rataTegangan);
    Serial.print(" V");
    Serial.print(" | Resistansi (rata-rata): ");
    Serial.print(rataResistansi);
    Serial.println(" kOhm");

    delay(500);  // Jeda untuk menjaga waktu loop sekitar 500 ms
}
