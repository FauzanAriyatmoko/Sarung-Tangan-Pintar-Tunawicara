## STUDI DAN PENGEMBANGAN SARUNG TANGAN PINTAR TUNAWICARA: MEMANFAATKAN SENSOR GYRO DAN FLEX DENGAN KLASIFIKASI DATA BERBASIS JARINGAN SARAF TIRUAN (ANN)

- **Developer:** Muhammad Fauzan Ariyatmoko
- **Advisor:** Diky Anggoro, S.Si., M.Si
- **Institusi:** Departemen Fisika, Fakultas Sains dan Analitika Data, Institut Teknologi Sepuluh Nopember (ITS), Surabaya
- **Tahun:** 2025

[![Stars](https://img.shields.io/github/stars/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara?style=social)](https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara/stargazers)
[![Forks](https://img.shields.io/github/forks/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara?style=social)](https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara/network/members)
[![Issues](https://img.shields.io/github/issues/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara)](https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara/issues)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

<!-- Badge Kustom agar sesuai dengan gambar -->
![Last Commit](https://img.shields.io/badge/komit--terakhir-rabu--lalu-lightgrey)
![Python Notebook](https://img.shields.io/badge/python--notebook-54.8%25-blue)
![C](https://img.shields.io/badge/C-44.1%25-orange)

### Dibuat menggunakan tech stack:
![TensorFlow](https://img.shields.io/badge/TensorFlow-%23FF6F00.svg?style=for-the-badge&logo=TensorFlow&logoColor=white)
![PlatformIO](https://img.shields.io/badge/PlatformIO-%23222.svg?style=for-the-badge&logo=platformio&logoColor=%23f5822a)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Espressif](https://img.shields.io/badge/espressif-E7352C.svg?style=for-the-badge&logo=espressif&logoColor=white)

---

## Daftar Isi
- [Gambaran Umum](#gambaran-umum)
- [Mengapa Sarung Tangan Pintar Tunawicara?](#mengapa-sarung-tangan-pintar-tunawicara)
- [Memulai](#memulai)
- [Instalasi](#instalasi)
- [Penggunaan](#penggunaan)
- [Pengujian & Evaluasi Model](#pengujian--evaluasi-model)
- [Berkontribusi](#berkontribusi)
- [Kontak](#kontak)
- [Informasi Lebih Lanjut](#informasi-lebih-lanjut)
- [Ucapan Terima Kasih](#ucapan-terima-kasih)
- [Peningkatan di Masa Depan](#peningkatan-di-masa-depan)

## Gambaran Umum
**Sarung Tangan Pintar Tunawicara** adalah sebuah alat bantu komunikasi bagi penyandang disabilitas tunawicara. Proyek ini berfokus pada pemanfaatan **sensor giroskop IMU MPU6050** dan **lima sensor *flex*** untuk mendeteksi gerakan tangan yang kompleks, merepresentasikan 26 huruf dalam **Abjad Sistem Isyarat Bahasa Indonesia (SIBI)**. Data sensor yang diperoleh kemudian diklasifikasikan menggunakan **Jaringan Saraf Tiruan (Artificial Neural Networks - ANN)**. Tujuan utamanya adalah untuk secara efektif memfasilitasi komunikasi antara penyandang tunawicara dan masyarakat umum yang tidak memahami bahasa isyarat, serta memberikan kontribusi nyata pada kemajuan riset dan pengembangan teknologi asistif di Indonesia.

## Mengapa Sarung Tangan Pintar Tunawicara?
Proyek ini mengatasi tantangan komunikasi dan penelitian yang ada, dengan fokus pada prinsip kerja instrumen dan pengembangan perangkat asistif:

- 🔬 **Analisis Prinsip Kerja & Fisis Instrumentasi Sensor:** Penelitian ini tidak hanya membangun perangkat, tetapi juga menganalisis secara mendalam prinsip kerja dan aspek fisis dari sensor giroskop IMU MPU6050 dan sensor *flex*. Ini memberikan pemahaman fundamental tentang bagaimana sensor ini merespons gerakan tangan.
- 🧠 **Klasifikasi Data Berbasis Jaringan Saraf Buatan:** Memanfaatkan kekuatan Jaringan Saraf Tiruan untuk memproses data sensor yang kompleks dan mengenali gestur abjad SIBI dengan akurasi tinggi.
- ⚡ **Akurasi & Keandalan Terbukti:** Hasil pengujian menunjukkan kalibrasi sensor IMU MPU6050 yang optimal (konfigurasi ke-7) dengan nilai mendekati ideal, serta hubungan linear yang kuat antara resistansi/tegangan sensor *flex* dengan sudut tekuk (rata-rata nilai R² > 0.95 untuk resistansi dan > 0.98 untuk tegangan).
- 🚀 **Kontribusi Riset Teknologi di Indonesia:** Proyek ini bertujuan untuk mengembangkan riset teknologi pada perangkat asistif di Indonesia, membantu para penyandang disabilitas tunawicara.
- 🌐 **Fungsionalitas Offline:** Desain sistem memungkinkan terjemahan dilakukan secara *offline*, memastikan keandalan di berbagai lingkungan tanpa ketergantungan internet.

## Memulai

Untuk memulai dengan proyek Sarung Tangan Pintar Tunawicara, ikuti petunjuk di bawah ini.

### Prasyarat
Sebelum Anda mulai, pastikan lingkungan pengembangan Anda memenuhi persyaratan berikut, sesuai dengan implementasi proyek ini:

**Perangkat Keras:**
-   Sarung Tangan Pintar prototipe (dengan sensor *flex*, sensor giroskop IMU MPU6050)
-   Mikrokontroler ESP32 DevkitC V4
-   DFPlayer Mini
-   Audio Speaker
-   Resistor 10K (6 buah)
-   Konektor JST-HX (9 buah)
-   Kabel Konektor 2mm (9 buah)
-   PCB Polos (1 buah)
-   Sarung Tangan (1 buah)
-   Kartu Memori (1 buah)
-   Kabel Ties (15 buah)
-   Pin Header (4 buah)
-   Baterai 5V (1 buah)
-   Switch (1 buah)

**Perangkat Lunak:**
-   **Eagle:** Untuk perancangan desain PCB.
-   **PlatformIO:** Untuk pengembangan perangkat lunak mikrokontroler.
-   **Visual Studio Code:** Editor kode pemrograman.
-   **Fritzing:** Untuk perancangan desain rangkaian pokok.
-   **Fusion 360:** Untuk perancangan desain wadah rangkaian.
-   **Bahasa Pemrograman Python Versi 3.18:** Bahasa Pemrograman Pemodelan.
-   **Pustaka Python:**
    -   `everywhereml Versi 0.2.40`: Konversi Data Model pada C++ atau Arduino.
    -   `Matplotlib Versi 3.10.3`: Visualisasi data hasil pemodelan.
    -   `Numpy Versi 2.2.5`: Komputasi numerik data.
    -   `Pandas Versi 2.2.3`: Pengolahan data pemodelan.
    -   `Scikit Learn Versi 1.6.1`: Normalisasi data dan pengukuran standar.
    -   `Tensorflow Keras Versi 2.18.0`: Pembuatan Pemodelan Jaringan Saraf Tiruan.
    -   `Seaborn Versi 0.13.2`: Visualisasi data evaluasi *Confusion Matrix*.

### Instalasi
Ikuti langkah-langkah ini untuk menyiapkan proyek di mesin lokal Anda:

#### 1. Kloning repositori
Mulai dengan mengkloning repositori GitHub ke sistem lokal Anda:

```bash
git clone [https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara.git](https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara.git)
cd Sarung-Tangan-Pintar-Tunawicara
```

#### 2. Instal dependensi (Python)
Navigasi ke direktori `Kebutuhan Library` dan instal pustaka Python yang diperlukan (pastikan `requirements.txt` ada atau instal secara manual):

```bash
cd Kebutuhan Library
pip install -r requirements.txt
```

#### 3. Penyiapan Perangkat Keras
-   Rakit sarung tangan pintar sesuai dengan desain rangkaian pokok (`Gambar 3.1`), desain PCB (`Gambar 3.3`), dan desain wadah rangkaian (`Gambar 3.4`) yang ada di laporan PDF.
-   Hubungkan mikrokontroler ESP32 DevkitC V4 dan komponen lainnya (sensor *flex*, MPU6050, DFPlayer Mini, Audio Speaker) sesuai skema.
-   Pastikan semua sensor terhubung dengan benar dan dikalibrasi sesuai dengan prosedur yang dijelaskan dalam laporan.

#### 4. Penyiapan Perangkat Lunak (Firmware Mikrokontroler)
-   Buka IDE Mikrokontroler pilihan Anda (misalnya, PlatformIO/Arduino IDE).
-   Buka file proyek firmware yang relevan (misalnya, `Listing 5.3` di Lampiran B PDF).
-   Pilih papan dan port serial yang benar di pengaturan IDE Anda.
-   Unggah firmware ke mikrokontroler ESP32 DevkitC V4 Anda.

## Penggunaan

### Tujuan Proyek
Tujuan utama Sarung Tangan Pintar Tunawicara adalah untuk memberdayakan individu dengan gangguan bicara dengan menyediakan alat terjemahan bahasa isyarat real-time yang mudah diakses dan efisien, khususnya untuk **Abjad SIBI**. Ini bertujuan untuk mendorong lingkungan komunikasi yang inklusif dalam kehidupan sehari-hari, pendidikan, dan pengaturan profesional.

### Kasus Penggunaan
Sarung Tangan Pintar Tunawicara dapat digunakan secara efektif dalam berbagai skenario:

-   **Komunikasi Sehari-hari:** Memfasilitasi percakapan alami antara individu yang mendengar dan tuli tanpa memerlukan penerjemah.
-   **Lingkungan Pendidikan:** Mendukung lingkungan belajar yang inklusif dengan menyediakan terjemahan real-time untuk siswa dengan gangguan bicara.
-   **Penelitian & Pengembangan:** Berfungsi sebagai platform untuk penelitian lebih lanjut dalam interaksi manusia-komputer, teknologi bantu, dan pembelajaran mesin untuk pengenalan gerakan.

## Pengujian & Evaluasi Model

Pengujian komprehensif telah dilakukan di seluruh siklus pengembangan untuk memastikan keakuratan, keandalan, dan kinerja Sarung Tangan Pintar Tunawicara di berbagai gerakan dan kondisi lingkungan.

### Hasil Kunci Evaluasi (berdasarkan Bab 4 Laporan TA)
-   **Kalibrasi Sensor Giroskop IMU MPU6050:**
    -   Konfigurasi ke-7 teridentifikasi sebagai yang optimal, menghasilkan nilai percepatan sumbu X: 0.01g, sumbu Y: 0.00g, sumbu Z: 1.00g.
    -   Kecepatan sudut sumbu X: -0.01 rad/s, sumbu Y: 0.00 rad/s, sumbu Z: 0.00 rad/s.
    -   Ini menunjukkan keberhasilan dalam meminimalkan *zero-bias error* yang signifikan sebelum kalibrasi (misal, Accel Z sekitar -0.8g, giroskop antara -0.005 hingga -0.015 rad/s).

-   **Sensitivitas Sensor Flex:**
    -   **Resistansi terhadap Sudut:** Hubungan linear yang kuat antara resistansi dan sudut tekuk untuk kelima sensor *flex* (rata-rata $R^2 > 0.95$).
      contoh: sensor 1 $R^2=0.9890$ (serial) dan $R^2=0.9902$ (multimeter).
      sensor 4 $R^2=0.9669$ (serial) dan $R^2=0.9550$ (multimeter)).
    -   **Tegangan terhadap Sudut:** Hubungan linear terbalik yang konsisten antara tegangan keluaran dan sudut tekuk (rata-rata $R^2 > 0.98$).
      contoh: sensor 1 $R^2=0.9959$ (serial) dan $R^2=0.9909$ (multimeter).
      sensor 3 $R^2=0.9942$ (serial) dan $R^2=0.9962$ (multimeter)).

-   **Evaluasi Klasifikasi Jaringan Saraf Tiruan (ANN):**
    -   **Akurasi Model:** Kurva akurasi pelatihan dan validasi konvergen mendekati 1.0 (100%), menunjukkan kemampuan generalisasi yang sangat baik dan tidak ada *overfitting* yang signifikan.
    
    ![grafik akurasi](https://github.com/user-attachments/assets/3938559a-9a45-48af-9aae-c590b801fe13)
    -   **Loss Model:** Kurva *loss* pelatihan dan validasi konvergen mendekati nol, mengindikasikan bahwa perbedaan antara prediksi model dan nilai sebenarnya sangat minimal.
    
    ![grafik loss](https://github.com/user-attachments/assets/1ad2caac-4bfd-4756-ade3-08102051f1ed)
    -   **Confusion Matrix:** Matriks 26x26 menunjukkan sebagian besar nilai terkonsentrasi kuat di sepanjang diagonal utama, menandakan klasifikasi yang benar untuk mayoritas abjad SIBI.
    
    ![train_ann_4](https://github.com/user-attachments/assets/feefb3e5-930d-4c9c-aa95-c101b9103ed0)
    -   **Metrik Performa (Precision, Recall, F1-Score):** Mayoritas kelas huruf menunjukkan nilai *precision*, *recall*, dan *F1-score* yang sangat tinggi (0.99 atau 1.00), membuktikan kinerja andal model di seluruh rentang gestur abjad SIBI.
    
    ![train_ann_2](https://github.com/user-attachments/assets/15d623e7-7cc6-4f56-93c6-f6bc71ce6e4b)


Pastikan kode Anda mematuhi standar pengkodean kami, menyertakan dokumentasi yang lengkap, dan disertai dengan pengujian yang sesuai. Untuk perubahan besar, pertimbangkan untuk membuka masalah terlebih dahulu untuk membahas perubahan yang diusulkan.

## Kontak
Punya pertanyaan, saran, atau hanya ingin terhubung? Kami senang mendengar dari Anda!

-   **Penulis/Pemelihara Proyek:** Muhammad Fauzan Ariyatmoko
-   **Email:** [fauzan.ariyatmoko@gmail.com]
-   **GitHub Issues:** Laporkan bug atau ajukan fitur baru melalui [halaman Issues kami](https://github.com/your-username/Sarung-Tangan-Pintar-Tunawicara/issues).

## Informasi Lebih Lanjut

### Versi
`1.0.0` - Rilis stabil awal dengan fungsionalitas inti untuk terjemahan bahasa isyarat real-time abjad SIBI.

## Ucapan Terima Kasih
Kami ingin mengucapkan terima kasih yang tulus kepada individu dan organisasi berikut atas kontribusi, dukungan, dan sumber daya berharga mereka yang memungkinkan "Studi dan Pengembangan Sarung Tangan Pintar Tunawicara" ini:

-   **Institut Teknologi Sepuluh Nopember (ITS)**, khususnya **Departemen Fisika** dan **Fakultas Sains dan Analitika Data**, atas dukungan dan fasilitas yang diberikan.
-   **Bapak Diky Anggoro, S.Si., M.Si**, selaku Supervisor, atas bimbingan dan arahan yang tak ternilai selama penelitian ini.
-   Seluruh pihak yang tidak dapat disebutkan satu per satu yang telah berkontribusi dalam bentuk saran, masukan, dan bantuan teknis.

## Peningkatan di Masa Depan
Kami terus berupaya untuk meningkatkan Sarung Tangan Pintar Tunawicara dan berencana untuk menerapkan peningkatan berikut di rilis mendatang, berdasarkan hasil dan saran dari laporan penelitian ini:

-   **Pengambilan Data dari Berbagai Pengguna:** Melakukan pengambilan data gerakan tangan dari orang yang berbeda-beda untuk menciptakan keanekaragaman gerakan pada setiap data abjad SIBI. Ini akan membuat model jaringan saraf tiruan dapat berkembang dan beradaptasi dengan bermacam-macam bentuk tangan orang.
-   **Penambahan Sensor Tekanan (Force Sensor):** Menambahkan parameter sensor tekanan untuk membantu membedakan jenis gerakan tangan yang memiliki bentuk identik, seperti contohnya gerakan tangan SIBI pada huruf 'M' dan 'N'.
-   **Penerjemahan Bahasa Isyarat Dua Tangan:** Mengembangkan modul untuk menerjemahkan bahasa isyarat yang menggunakan kedua tangan. Ini memerlukan pengaturan mendalam pada program utama sarung tangan pintar tunawicara untuk mencapai keselarasan respons gerakan kedua tangan.
-   **Perluasan Kosakata:** Meningkatkan jumlah isyarat dan frasa yang dikenali di luar abjad SIBI.
-   **Integrasi Aplikasi Seluler:** Mengembangkan aplikasi pendamping seluler (Android/iOS) untuk visualisasi data yang lebih mudah dan kontrol.

Ide dan kontribusi Anda dipersilakan untuk membantu kami memprioritaskan dan mengembangkan fitur-fitur ini!
