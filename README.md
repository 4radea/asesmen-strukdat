# asesmen-strukdat

Identitas Pengumpul

Nama: Aradea Satria Permana

NIM: 103122400014

Kelas: SE-08-01

1. Kode Program

BBerikut adalah kode program untuk “Program C++ yang mengimplementasikan Single Linked List dan melakukan pemisahan (split) data list menjadi dua bagian.”

(Silakan ganti bahasa dan kode di bawah ini sesuai tugas Anda)

```File: main.cpp
 * Author: Aradea Satria Permana
 * NIM: 103122400014
 * Deskripsi: Program untuk mengelola data postingan menggunakan
 * struktur data Single Linked List (SLL). Program ini menampilkan
 * seluruh postingan, lalu membagi list menjadi dua bagian (split list)
 * menggunakan subprogram splitList().
 */

//Aradea Satria Permana - 103122400014
#include "sll.h"
#include "sll.cpp"
#include <iostream>
using namespace std;

int main() {
    List L, L1, L2;
    createNewList(L);

    // Buat beberapa postingan
    infotype post1 = {1, "Halo, Ini postingan pertama saya", 10, "aradea"};
    infotype post2 = {2, "Sedang asesmen Strukdat", 25, "afel"};
    infotype post3 = {3, "Kepala saya pusing", 15, "putra"};
    infotype post4 = {4, "Struktur data menyenangkan :)", 30, "restu"};
    infotype post5 = {5, "kapan pulang", 50, "raihan"};

    // Masukkan data ke list utama (L)
    insertLast(L, newElement(post1));
    insertLast(L, newElement(post2));
    insertLast(L, newElement(post3));
    insertLast(L, newElement(post4));
    insertLast(L, newElement(post5));

    cout << "=== LIST AWAL ===" << endl;
    printList(L);
    cout << endl;

    // Split list menjadi dua bagian
    splitList(L, L1, L2);

    cout << endl << "=== HASIL SPLIT ===" << endl;

    cout << "\n-- List 1 (Bagian Awal) --" << endl;
    printList(L1);

    cout << "\n-- List 2 (Bagian Akhir) --" << endl;
    printList(L2);

    cout << endl << "Program selesai." << endl;
    
    return 0;
}

2. Penjelasan Kode

Berikut adalah penjelasan alur logika dari kode program di atas:

Header & Namespace: Program menggunakan library <iostream> untuk operasi input/output dan mendefinisikan struktur data List di file header sll.h.

Makro:
#define first(L) (L).first
#define next(P) (P)->next
#define info(P) (P)->info
#define NIL NULL
mempermudah akses elemen-elemen list.

Struktur Data
Tipe data infotype menyimpan informasi postingan:

struct infotype {
    int ID;
    string username;
    string konten;
    int like;
};

Sedangkan elmlist dan List digunakan untuk membuat node dan daftar list tunggal:

struct elmlist {
    infotype info;
    elmlist *next;
};

struct List {
    elmlist *first;
};

Fungsi dan Prosedur Utama

Berikut fungsi-fungsi penting dalam program:

1. createNewList(List &L)
Menginisialisasi list agar first(L) bernilai NIL (kosong).

2. newElement(infotype data)
Membuat elemen baru di heap menggunakan new, menyimpan info, dan mengembalikan alamatnya.

3. insertFirst(List &L, address P)
Menambahkan elemen baru di awal list.
Jika list kosong → elemen menjadi node pertama.

4. printList(List L)
Menampilkan seluruh isi postingan di layar, termasuk ID, username, konten, dan jumlah like.
Di akhir, menampilkan identitas:

Nama: Aradea Satria Permana
NIM : 103122400014

5. splitList(List L, List &L1, List &L2)
Fungsi utama yang membagi list L menjadi dua bagian:

Hitung jumlah elemen (length(L)).

Tentukan titik tengah (mid = n / 2).

Masukkan setengah pertama elemen ke L1.

Sisanya ke L2.

Tampilkan pesan “List berhasil di-split menjadi dua bagian.”

3. Output Program

Berikut adalah hasil eksekusi program (output) ketika dijalankan.

Sebelum Split:

=== LIST AWAL ===
===== TIMELINE POSTINGAN =====
ID: 1
User: aradea
Konten: Halo, Ini postingan pertama saya
Like: 10
------------------------------
ID: 2
User: afel
Konten: Sedang asesmen Strukdat
Like: 25
------------------------------
ID: 3
User: putra
Konten: Kepala saya pusing
Like: 15
------------------------------
ID: 4
User: restu
Konten: Struktur data menyenangkan :)
Like: 30
------------------------------
ID: 5
User: raihan
Konten: kapan pulang
Like: 50
------------------------------
Nama: Aradea Satria Permana
NIM : 103122400014
NJIL.

Setelah Split:
List berhasil di-split menjadi dua bagian.

=== HASIL SPLIT ===
-- List 1 (Bagian Awal) --
===== TIMELINE POSTINGAN =====
ID: 1
User: aradea
Konten: Halo, Ini postingan pertama saya
Like: 10
------------------------------
ID: 2
User: afel
Konten: Sedang asesmen Strukdat
Like: 25
------------------------------
Nama: Aradea Satria Permana
NIM : 103122400014

-- List 2 (Bagian Akhir) --
===== TIMELINE POSTINGAN =====
ID: 3
User: putra
Konten: Kepala saya pusing
Like: 15
------------------------------
ID: 4
User: restu
Konten: Struktur data menyenangkan :)
Like: 30
------------------------------
ID: 5
User: raihan
Konten: kapan pulang
Like: 50
------------------------------
Nama: Aradea Satria Permana
NIM : 103122400014

(Tips: Anda juga bisa menyertakan screenshot/gambar output di bagian ini jika diperlukan, seperti ini:)
```

4. Penjelasan Lanjutan (Analisis Output)

1. Sebelum split:
Semua 5 data postingan tersimpan dalam satu list tunggal (L).

2. Setelah split:
Fungsi splitList() menghitung jumlah elemen (5), lalu membagi menjadi dua bagian:

mid = 5 / 2 = 2

L1 berisi dua data pertama (ID 1–2)

L2 berisi tiga data sisanya (ID 3–5)

3. Pesan “List berhasil di-split menjadi dua bagian.”
Menandakan fungsi telah berjalan tanpa error dan berhasil membuat dua linked list baru.

5. Kesimpulan

Berdasarkan implementasi dan pengujian kode di atas, dapat disimpulkan bahwa:

Dari implementasi dan hasil eksekusi di atas dapat disimpulkan bahwa:

Program berhasil membuat dan mengelola Single Linked List dengan operasi dasar seperti create, insert, print, dan split.
Fungsi splitList() mampu membagi isi list menjadi dua bagian sesuai jumlah data yang ada.
Struktur data Linked List terbukti fleksibel untuk menyimpan data dinamis (seperti postingan media sosial).
Program menampilkan output yang benar, terstruktur, dan sesuai spesifikasi dengan identitas pembuat program di akhir hasil.
