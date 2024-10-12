> [!NOTE]
> Soal diambil dari [Buku Siswa Informatika Kelas XI Kemdikbud](https://static.buku.kemdikbud.go.id/content/pdf/bukuteks/kurikulum21/Informatika-BS-KLS-XI.pdf) Halaman 53 - 58

---

<br><br>

# Subproblem 1: Menghitung Jarak Horizontal Terjauh

#### Deskripsi:

Pada subproblem ini, kalian akan diminta untuk menghitung jarak horizontal terjauh yang dapat ditempuh oleh Boro apabila Boro ikut berdiri di atas semangka yang akan diluncurkan oleh pemilik lahan.

#### Format Masukan:

Baris pertama adalah sebuah bilangan bulat S yang menggambarkan sudut peluncuran. Nilai S ini bernilai 0−90. Baris kedua adalah V yang merupakan kecepatan awal Boro saat meluncur dengan menggunakan ketapel. Asumsikan bahwa nilai gravitasi adalah 10.

#### Format Keluaran:

Keluaran berupa bilangan yang menunjukkan jarak terjauh Boro mendarat di tanah.
| Contoh Masukan | Contoh Keluaran |
|---|---|
| 37<br>10 | 9.6 |

> [!NOTE]
> [View the solution](problem1.cpp)

# Subproblem 2: Menghitung Waktu

#### Deskripsi:

Pada subproblem ini, kalian akan diminta untuk menghitung waktu yang diperlukan Boro untuk mencapai jarak horizontal terjauh apabila Boro ikut berdiri di atas semangka yang akan diluncurkan oleh pemilik lahan.

#### Format Masukan:

Baris pertama adalah sebuah bilangan bulat S yang menggambarkan sudut peluncuran. Nilai S ini bernilai 0−90. Baris kedua adalah V yang merupakan kecepatan awal Boro saat meluncur dengan menggunakan ketapel. Asumsikan bahwa nilai gravitasi adalah 10.

#### Format keluaran:

Keluaran berupa bilangan yang menunjukkan waktu yang ditempuh Boro untuk mencapai jarak terjauh dengan format 3 angka di belakang koma.
| Contoh Masukan | Contoh Keluaran |
| --- | --- |
| 37<br>100 | 12.036 |

> [!NOTE]
> [View the solution](problem2.cpp)

# Subproblem 3: Prediksi Ketinggian Dicapai Boro

#### Deskripsi:

Pada subproblem ini, kalian akan diminta untuk memberikan prediksi apakah Boro dapat mencapai ketinggian lebih tinggi daripada tinggi pohon tempat ia bersarang, apabila Boro ikut berdiri di atas semangka yang akan diluncurkan oleh pemilik lahan.

#### Format Masukan:

Baris pertama adalah sebuah bilangan bulat S yang menggambarkan sudut peluncuran. Nilai S ini bernilai 0−90. Baris kedua adalah V yang merupakan kecepatan awal Boro saat meluncur dengan menggunakan ketapel. Baris ketiga adalah T yang merupakan tinggi pohon tempat Boro Bersarang. Asumsikan bahwa nilai gravitasi adalah 10.

#### Format Keluaran:

Keluaran berupa bilangan yang menunjukkan status ketinggian Boro dibandingkan dengan tinggi pohon tempat sarang Boro. 1 apabila Boro dapat mencapai ketinggian sama dengan tinggi pohon tempat sarangnya berada atau lebih, 0 apabila Boro tidak mampu mencapai ketinggian yang sama dengan pohon tersebut. Serta ketinggian maksimum yang dapat diperoleh oleh Boro saat meluncur dengan menggunakan ketapel.
| Contoh Masukan | Contoh Keluaran |
| --- | --- |
| 37<br>100<br>100 | Status: 1<br>Ketinggian: 181.09 |
| 37<br>100<br>200 | Status: 0<br>Ketinggian: 181.09 |

> [!NOTE]
> [View the solution](problem3.cpp)

# Subproblem 4: Prediksi Ketinggian Dicapai Boro dan Teman-temannya

#### Deskripsi:

Pada subproblem ini, kalian akan diminta untuk memberikan prediksi apakah Boro dan teman-temannya dapat mencapai ketinggian lebih tinggi daripada tinggi pohon tempat ia bersarang. Padasubproblem ini, burung yang akan menumpang semangga tidak hanya Boro, namun terdapat burung lain yang akan menumpang semangka tersebut secara bergantian.

#### Format Masukan:

Baris pertama adalah sebuah bilangan bulat N yang menggambarkan jumlah burung yang akan ikut peluncuran. Baris kedua adalah S yang menggambarkan sudut peluncuran. Nilai S ini bernilai 0-90. Baris ketiga adalah V yang merupakan kecepatan awal Burung saat meluncur dengan menggunakan ketapel. Baris keempat adalah T yang merupakan tinggi pohon tempat burung bersarang. Asumsikan bahwa nilai gravitasi adalah 10.

#### Format Keluaran:

Keluaran berupa urutan burung lalu bilangan yang menunjukkan status ketinggian burung dibandingkan dengan tinggi pohon tempat sarang burung tersebut. 1 apabila burung dapat mencapai ketinggian sama dengan tinggi pohon tempat sarangnya berada atau lebih, 0 apabila burung tidak mampu mencapai ketinggian yang sama dengan pohon tersebut. Serta ketinggian maksimum yang dapat diperoleh oleh burung saat meluncur dengan menggunakan ketapel.
| Contoh Masukan | Contoh Keluaran |
| --- | --- |
| 1<br>37<br>100<br>100 | Status Burung 1: 1<br>Ketinggian: 181.09 |
| 2<br>37<br>100<br>100<br>37<br>100<br>200 | Status Burung 1: 1<br>Ketinggian: 181.09<br>Status Burung 2: 0<br>Ketinggian: 181.09 |

> [!NOTE]
> [View the solution](problem4.cpp)
