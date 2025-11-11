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