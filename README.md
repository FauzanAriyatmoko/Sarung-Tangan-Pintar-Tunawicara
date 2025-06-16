# SARUNG-TANGAN-PINTAR-TUNAWICARA

Dari Teknologi Untuk Masyarakat Disabilitas Tunawicara Dalam Kebebasan Bersosialisasi Tanpa Batas🧏‍♂️🙋‍♂️

[![Stars](https://img.shields.io/github/stars/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara?style=social)](https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara/stargazers)
[![Forks](https://img.shields.io/github/forks/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara?style=social)](https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara/network/members)
[![Issues](https://img.shields.io/github/issues/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara)](https://github.com/FauzanAriyatmoko/Sarung-Tangan-Pintar-Tunawicara/issues)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

<!-- Badge Kustom agar sesuai dengan gambar -->
![Last Commit](https://img.shields.io/badge/komit--terakhir-rabu--lalu-lightgrey)
![Jupyter Notebook](https://img.shields.io/badge/jupyter--notebook-54.8%25-blue)
![Languages](https://img.shields.io/badge/bahasa-4-blue)

### Dibangun dengan alat dan teknologi:
![Markdown](https://img.shields.io/badge/Markdown-000000?style=for-the-badge&logo=markdown)
![README](https://img.shields.io/badge/README-blue?style=for-the-badge)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)

---

## Daftar Isi
- [Gambaran Umum](#gambaran-umum)
- [Mengapa Sarung Tangan Pintar Tunawicara?](#mengapa-sarung-tangan-pintar-tunawicara)
- [Memulai](#memulai)
- [Instalasi](#instalasi)
- [Penggunaan](#penggunaan)
- [Pengujian](#pengujian)
- [Berkontribusi](#berkontribusi)
- [Kontak](#kontak)
- [Informasi Lebih Lanjut](#informasi-lebih-lanjut)
- [Ucapan Terima Kasih](#ucapan-terima-kasih)
- [Peningkatan di Masa Depan](#peningkatan-di-masa-depan)

## Gambaran Umum
**Bebaskan Kekuatan Komunikasi!** Sarung Tangan Pintar Tunawicara adalah proyek inovatif yang berfokus pada menjembatani kesenjangan komunikasi bagi individu dengan gangguan bicara. Sistem inovatif ini menggunakan sarung tangan pintar yang dilengkapi dengan sensor canggih untuk secara akurat menangkap gerakan tangan dan isyarat dari bahasa isyarat. Memanfaatkan algoritma pembelajaran mesin yang canggih, gerakan-gerakan ini kemudian langsung diterjemahkan ke dalam bahasa lisan atau tertulis. Misi kami adalah menciptakan dunia yang lebih inklusif dan mudah diakses di mana hambatan komunikasi diminimalkan, mendorong kemandirian dan koneksi yang lebih besar bagi komunitas tuli dan sulit mendengar.

## Mengapa Sarung Tangan Pintar Tunawicara?
Desain dan implementasi Sarung Tangan Pintar Tunawicara didorong oleh komitmen terhadap keunggulan dan utilitas praktis. Fitur unik dan komponen tangguhnya memastikan kinerja yang luar biasa dan pengalaman yang ramah pengguna:

- 🔬 **Kalibrasi & Pengukuran Sensitivitas:** Presisi adalah yang utama. Sistem kami mencakup rutinitas kalibrasi canggih dan sensor yang sangat sensitif yang memastikan deteksi akurat bahkan gerakan tangan dan jari yang paling halus, yang sangat penting untuk terjemahan bahasa isyarat yang tepat.
- 🧠 **Integrasi Pembelajaran Mesin:** Pada intinya, sarung tangan ini menggunakan model pembelajaran mesin canggih (misalnya, jaringan saraf) yang dilatih pada kumpulan data bahasa isyarat yang ekstensif. Integrasi ini memungkinkan interpretasi gerakan yang cerdas dan adaptif, mengubahnya menjadi ucapan yang terdengar alami atau teks yang jelas.
- ⚡ **Latensi Rendah:** Kecepatan penting dalam komunikasi real-time. Sistem ini dioptimalkan untuk penundaan pemrosesan minimal, memberikan terjemahan yang hampir instan. Latensi rendah ini memastikan percakapan yang lancar dan pemahaman langsung antara pengguna.
- 🚀 **Penyebaran yang Efisien:** Kami telah merancang sistem ini agar mudah digunakan sejak hari pertama. Proses penyiapan yang efisien dan antarmuka yang intuitif membuatnya dapat diakses oleh pengguna dari semua latar belakang teknis, memungkinkan penyebaran cepat dan manfaat langsung.
- 🔋 **Daya Tahan Baterai Diperpanjang:** Keandalan dalam penggunaan sehari-hari sangat penting. Sarung tangan ini dirancang untuk efisiensi energi, menawarkan daya tahan baterai yang diperpanjang untuk mendukung penggunaan jangka panjang tanpa pengisian ulang yang sering, memastikan komunikasi tanpa gangguan.
- 🌐 **Fungsionalitas Offline:** Konektivitas bisa tidak terduga. Sarung Tangan Pintar Tunawicara dibangun dengan kemampuan offline yang kuat, yang berarti dapat melakukan terjemahan yang akurat bahkan tanpa koneksi internet aktif. Ini memastikan keandalan dan kegunaan di lingkungan apa pun.

## Memulai

Untuk memulai proyek Sarung Tangan Pintar Tunawicara, ikuti petunjuk di bawah ini.

### Prasyarat
Sebelum Anda mulai, pastikan lingkungan pengembangan Anda memenuhi persyaratan berikut:

-   **Bahasa Pemrograman:** C++ (untuk firmware mikrokontroler)
-   **IDE Mikrokontroler:** Arduino IDE, PlatformIO, atau yang serupa, dikonfigurasi untuk mikrokontroler spesifik Anda (misalnya, ESP32, Teensy, STM32).
-   **Python:** Versi 3.8+ (untuk pemrosesan data, pelatihan model, dan skrip interaksi sisi PC).
-   **Pustaka Python:**
    -   `pip install numpy pandas scikit-learn tensorflow` (atau `tensorflow-lite` untuk perangkat *edge*)
    -   `pip install pyserial` (untuk komunikasi serial dengan sarung tangan)
-   **Perangkat Keras:**
    -   Prototipe Sarung Tangan Pintar (dengan sensor *flex*, akselerometer, giroskop, dll.)
    -   Papan Mikrokontroler yang kompatibel
    -   Kabel USB untuk transfer data dan daya

### Instalasi
Ikuti langkah-langkah ini untuk menyiapkan proyek di mesin lokal Anda:

#### 1. Kloning repositori
Mulai dengan mengkloning repositori GitHub ke sistem lokal Anda:

```bash
git clone [https://github.com/your-username/Sarung-Tangan-Pintar-Tunawicara.git](https://github.com/your-username/Sarung-Tangan-Pintar-Tunawicara.git)
cd Sarung-Tangan-Pintar-Tunawicara
```

#### 2. Instal dependensi (Python)
Navigasi ke direktori `Software/Python` dan instal pustaka Python yang diperlukan:

```bash
cd Software/Python
pip install -r requirements.txt # Pastikan Anda memiliki file requirements.txt dengan semua dependensi yang terdaftar
```

#### 3. Penyiapan Perangkat Keras
Rakitan sarung tangan pintar sesuai dengan skema yang disediakan di direktori `Hardware/Schematics`. Pastikan semua sensor terhubung dengan benar dan dikalibrasi sesuai dengan dokumentasi perangkat keras.
- Hubungkan mikrokontroler ke komputer Anda melalui USB.

#### 4. Penyiapan Perangkat Lunak (Firmware Mikrokontroler)
Buka IDE Mikrokontroler pilihan Anda (misalnya, Arduino IDE).
-   Buka file `.ino` atau proyek yang terletak di `Firmware/Microcontroller`.
-   Pilih papan dan port serial yang benar di pengaturan IDE Anda.
-   Unggah firmware ke mikrokontroler Anda.

```arduino
// Contoh untuk Arduino IDE:
// 1. Buka file .ino (misalnya, SarungTanganFirmware.ino)
// 2. Buka Tools -> Board dan pilih mikrokontroler Anda (misalnya, "ESP32 Dev Module")
// 3. Buka Tools -> Port dan pilih port serial yang terhubung ke sarung tangan Anda.
// 4. Klik tombol "Upload" (ikon panah kanan) untuk mengompilasi dan mengunggah firmware.
```

## Penggunaan

### Tujuan Proyek
Tujuan utama Sarung Tangan Pintar Tunawicara adalah untuk memberdayakan individu dengan gangguan bicara dengan menyediakan alat terjemahan bahasa isyarat real-time yang mudah diakses dan efisien. Ini bertujuan untuk mendorong lingkungan komunikasi yang inklusif dalam kehidupan sehari-hari, pendidikan, dan pengaturan profesional.

### Cara Menjalankan
Setelah perangkat keras disiapkan dan firmware diunggah, Anda dapat berinteraksi dengan sarung tangan pintar:

1.  **Mulai Monitor Serial:** Buka Monitor Serial di IDE Mikrokontroler Anda untuk melihat data sensor mentah atau pesan debug awal.
2.  **Jalankan Aplikasi Sisi PC (Opsional):** Jika Anda memiliki aplikasi desktop untuk tampilan visual atau interaksi lanjutan, jalankan dari direktori `Software/Python`.
    ```bash
    python main_app.py # Atau skrip aplikasi spesifik Anda
    ```
    Aplikasi ini biasanya akan terhubung ke sarung tangan melalui port serial dan menampilkan teks atau ucapan yang diterjemahkan.

### Kasus Penggunaan
Sarung Tangan Pintar Tunawicara dapat digunakan secara efektif dalam berbagai skenario:

-   **Komunikasi Sehari-hari:** Memfasilitasi percakapan alami antara individu yang mendengar dan tuli tanpa memerlukan penerjemah.
-   **Lingkungan Pendidikan:** Mendukung lingkungan belajar yang inklusif dengan menyediakan terjemahan real-time untuk siswa dengan gangguan bicara.
-   **Layanan Publik:** Meningkatkan aksesibilitas di rumah sakit, kantor pemerintah, dan ritel dengan memungkinkan komunikasi langsung.
-   **Situasi Darurat:** Menawarkan alat komunikasi vital ketika pemahaman yang cepat dan jelas sangat penting.
-   **Penelitian & Pengembangan:** Berfungsi sebagai platform untuk penelitian lebih lanjut dalam interaksi manusia-komputer, teknologi bantu, dan pembelajaran mesin untuk pengenalan gerakan.

## Pengujian

Pengujian komprehensif telah dilakukan di seluruh siklus pengembangan untuk memastikan keakuratan, keandalan, dan kinerja Sarung Tangan Pintar Tunawicara di berbagai gerakan dan kondisi lingkungan.

### Cara Menguji
Untuk memverifikasi fungsionalitas sistem, Anda dapat melakukan pengujian berikut:

1.  **Uji Unit (Firmware):** Pembacaan sensor individual dan logika deteksi gerakan dasar.
    ```bash
    # (Jika berlaku, perintah khusus untuk kerangka kerja pengujian unit tertanam)
    # mis., platformio test -e your_env
    ```
2.  **Uji Unit (Python):** Uji komponen individual dari pipeline pemrosesan Python (misalnya, normalisasi data, ekstraksi fitur, inferensi model).
    ```bash
    cd Software/Python
    pytest # Dengan asumsi Anda telah menginstal pytest dan file pengujian sudah ada
    ```
3.  **Uji Integrasi:** Verifikasi fungsionalitas ujung-ke-ujung, mulai dari masukan gerakan tangan pada sarung tangan hingga keluaran terjemahan akhir pada aplikasi sisi PC atau monitor serial.
    -   Lakukan serangkaian gerakan yang telah ditentukan dan bandingkan hasil terjemahan dengan hasil yang diharapkan.
4.  **Uji Penerimaan Pengguna (UAT):** Lakukan pengujian dengan pengguna target (misalnya, individu yang fasih berbahasa isyarat) untuk mengumpulkan umpan balik kualitatif tentang keakuratan, kegunaan, dan pengalaman pengguna secara keseluruhan. Ini membantu dalam menyempurnakan sistem untuk skenario dunia nyata.
5.  **Uji Kinerja:** Nilai latensi, konsumsi baterai, dan kecepatan pemrosesan di bawah berbagai beban untuk memastikan kinerja real-time.

## Berkontribusi
Kami sangat menyambut kontribusi dari komunitas untuk membantu kami meningkatkan dan memperluas kemampuan Sarung Tangan Pintar Tunawicara! Baik Anda seorang pengembang, desainer, ahli bahasa isyarat, atau hanya bersemangat tentang aksesibilitas, masukan Anda sangat berharga.

Untuk berkontribusi, harap ikuti panduan berikut:

1.  **Fork repositori:** Mulai dengan mem-fork repositori ini ke akun GitHub Anda sendiri.
2.  **Buat cabang fitur Anda:**
    ```bash
    git checkout -b feature/nama-fitur-keren-anda
    ```
3.  **Buat perubahan Anda:** Terapkan fitur baru, perbaikan bug, atau peningkatan Anda.
4.  **Komit perubahan Anda:** Tulis pesan komit yang jelas dan ringkas.
    ```bash
    git commit -m 'feat: Menambahkan fitur baru yang luar biasa' # atau 'fix: Menyelesaikan bug kritis'
    ```
5.  **Push ke cabang:**
    ```bash
    git push origin feature/nama-fitur-keren-anda
    ```
6.  **Buka Pull Request:** Kirim Pull Request dari repositori yang Anda fork ke cabang `main` dari repositori ini. Harap berikan deskripsi rinci tentang perubahan Anda dan referensikan masalah terkait.

Pastikan kode Anda mematuhi standar pengkodean kami, menyertakan dokumentasi yang lengkap, dan disertai dengan pengujian yang sesuai. Untuk perubahan besar, pertimbangkan untuk membuka masalah terlebih dahulu untuk membahas perubahan yang diusulkan.

## Kontak
Punya pertanyaan, saran, atau hanya ingin terhubung? Kami senang mendengar dari Anda!

-   **Pemelihara Proyek:** [Nama Anda / Tim Anda]
-   **Email:** [email-anda@example.com]
-   **GitHub Issues:** Laporkan bug atau ajukan fitur baru melalui [halaman Issues kami](https://github.com/your-username/Sarung-Tangan-Pintar-Tunawicara/issues).
-   **Twitter/Media Sosial (Opsional):** [@PeganganProyekAnda] (jika ada)

## Informasi Lebih Lanjut

### Versi
`1.0.0` - Rilis stabil awal dengan fungsionalitas inti untuk terjemahan bahasa isyarat real-time.

### Lisensi
Proyek ini dilisensikan di bawah Lisensi MIT. Anda bebas menggunakan, memodifikasi, dan mendistribusikan perangkat lunak ini untuk tujuan komersial dan non-komersial, asalkan Anda menyertakan hak cipta asli dan pemberitahuan lisensi. Lihat file [LICENSE](LICENSE) untuk detail lengkap.

## Ucapan Terima Kasih
Kami ingin mengucapkan terima kasih yang tulus kepada individu dan organisasi berikut atas kontribusi, dukungan, dan sumber daya berharga mereka yang memungkinkan Sarung Tangan Pintar Tunawicara:

-   [Nama/Organisasi A]: Untuk menyediakan kumpulan data penting untuk pelatihan model.
-   [Nama/Organisasi B]: Untuk panduan dan keahlian dalam pemrograman mikrokontroler.
-   [Komunitas/Proyek Sumber Terbuka]: Untuk pustaka atau alat dasar yang digunakan.
-   Semua penguji beta dan pengguna awal yang memberikan umpan balik berharga.

## Peningkatan di Masa Depan
Kami terus berupaya untuk meningkatkan Sarung Tangan Pintar Tunawicara dan berencana untuk menerapkan peningkatan berikut di rilis mendatang:

-   **Kosakata yang Diperluas:** Meningkatkan jumlah isyarat dan frasa yang dikenali untuk mendukung rentang komunikasi yang lebih luas.
-   **Dukungan Multi-bahasa:** Menambahkan kemampuan terjemahan untuk bahasa isyarat dari berbagai wilayah (misalnya, ASL, BSL, ISL).
-   **Model Pembelajaran Mesin yang Ditingkatkan:** Jelajahi arsitektur ML yang lebih canggih untuk akurasi dan ketahanan yang lebih tinggi.
-   **Gerakan yang Dapat Disesuaikan:** Memungkinkan pengguna untuk melatih dan menambahkan gerakan kustom mereka sendiri dan terjemahan yang sesuai.
-   **Integrasi Aplikasi Seluler:** Mengembangkan aplikasi seluler pendamping (Android/iOS) untuk visualisasi data dan kontrol yang lebih mudah.
-   **Umpan Balik Haptik:** Mengintegrasikan umpan balik haptik ke dalam sarung tangan untuk memberikan konfirmasi taktil pengenalan gerakan.
-   **Integrasi Cloud:** Integrasi cloud opsional untuk analitik lanjutan, pembaruan model, dan sinkronisasi data.

Ide dan kontribusi Anda dipersilakan untuk membantu kami memprioritaskan dan mengembangkan fitur-fitur ini!
