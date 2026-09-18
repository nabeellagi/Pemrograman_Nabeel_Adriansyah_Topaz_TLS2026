# Tugas TLS 2026 - Pemrograman Dasar

Nama    : Nabeel Adriansyah
NIU     : 579035
Prodi   : Teknik Biomedis

Repository ini berisikan solusi pseudocode dan solusi kode untuk problem TLS 2026 penugasan Pemrograman Dasar. Berikut Problem yang diselesaikan :


# Problem 1: The Last Astronaut

Dalam sebuah misi luar angkasa, terdapat sejumlah astronot yang harus mengikuti sebuah proses seleksi untuk menentukan siapa yang akan menjadi astronot terakhir yang bertahan. Para astronot berdiri membentuk sebuah lingkaran dan masing-masing memiliki nomor unik mulai dari 1 hingga $n$. Komandan memiliki sebuah sistem eliminasi dengan sebuah nilai $K$. Sistem tersebut bekerja secara berulang hingga hanya tersisa satu astronot.

Pada awal proses, perhitungan dimulai dari astronot nomor 1. Astronot yang mendapatkan hitungan ke-$K$ akan dieliminasi dari lingkaran. Setelah seorang astronot dieliminasi, proses perhitungan berikutnya dimulai dari astronot yang berada tepat setelah posisi astronot tersebut.

Namun, terdapat aturan khusus pada sistem tersebut. Nilai $K$ dapat berubah setelah setiap eliminasi:

1. Jika nomor astronot yang dieliminasi **genap**, maka nilai $K$ bertambah 2.
2. Jika nomor astronot yang dieliminasi **ganjil**, maka nilai $K$ berkurang 1.
3. Nilai $K$ tidak boleh kurang dari 2. Apabila hasil perubahan menyebabkan $K < 2$, maka nilai $K$ menjadi 2.

Proses tersebut terus dilakukan hingga hanya satu astronot yang tersisa.

**Bantulah komandan menentukan seluruh urutan astronot yang dieliminasi dan astronot terakhir yang bertahan.**

**Solusi berada di problem1.cpp**

---

# Problem 2: Alien-In-The-Middle

Dari sejumlah astronot yang ada pada misi tersebut, seorang astronot menyadari bahwa terdapat alien yang sedang berpura-pura menjadi salah satu dari mereka. Untuk mengatasi masalah ini, mereka membuat cara komunikasi baru yang hanya dapat dipahami oleh manusia asli. Cara komunikasi baru ini menggunakan sebuah sistem sandi rahasia.

Dalam sistem ini, setiap huruf akan diubah menjadi huruf lain berdasarkan posisi asli nomor dari huruf sebelumnya. Huruf pertama tidak mengalami perubahan, sedangkan setiap huruf berikutnya akan digeser sebanyak nilai dari huruf yang berada tepat sebelumnya. Untuk menentukan nilai setiap huruf, gunakan posisi huruf dalam alfabet, dengan **A = 1, B = 2, C = 3, ..., Z = 26**. Jika hasil pergeseran melewati Z, perhitungan kembali dimulai dari A.

Sebagai contoh, jika pesan yang ingin disampaikan adalah:

**ALIENS**

Maka proses sandinya:

| Huruf Pesan Asli | Huruf Sebelumnya | Huruf Baru           |
| ---------------- | ---------------- | -------------------- |
| A = 1            | -                | A(1) + 0 = A(1)      |
| L = 12           | A = 1            | L(12) + A(1) = M(13) |
| I = 9            | L = 12           | I(9) + L(12) = U(21) |
| E = 5            | I = 9            | E(5) + I(9) = N(14)  |
| N = 14           | E = 5            | N(14) + E(5) = S(19) |
| S = 19           | N = 14           | S(19) + N(14) = G(7) |


**Solusi berada di problem2.cpp**
