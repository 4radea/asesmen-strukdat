//Aradea Satria Permana - 103122400014
#include "sll.h"
#include <iostream>
#include <string>

using namespace std;

// Membuat elemen baru
address newElement(infotype data) {
    address p = new elmlist;
    info(p) = data;
    next(p) = NIL;
    return p;
}

// Membuat list baru (kosong)
void createNewList(List &a) {
    first(a) = NIL;
}

// Mengecek apakah list kosong
bool isEmpty(List a) {
    return first(a) == NIL;
}

// ==== UNTUK NIM GANJIL ====
// Menyisipkan elemen di awal
void insertFirst(List &a, address p) {
    if (isEmpty(a)) {
        first(a) = p;
    } else {
        next(p) = first(a);
        first(a) = p;
    }
}

// Menyisipkan elemen di akhir
void insertLast(List &a, address p) {
    if (isEmpty(a)) {
        first(a) = p;
    } else {
        address q = first(a);
        while (next(q) != NIL) {
            q = next(q);
        }
        next(q) = p;
    }
}

// Tidak wajib diisi (opsional)
void insertAfter(List &a, infotype x, address p) {
    // kosongkan saja
}

// Menghapus elemen pertama
void deleteFirst(List &a, address &p) {
    if (!isEmpty(a)) {
        p = first(a);
        first(a) = next(p);
        next(p) = NIL;
    } else {
        cout << "List kosong, tidak bisa deleteFirst." << endl;
    }
}

// Menghapus elemen terakhir
void deleteLast(List &a, address &p) {
    if (isEmpty(a)) {
        cout << "List kosong, tidak bisa deleteLast." << endl;
        return;
    }

    address q = first(a);
    if (next(q) == NIL) {
        p = q;
        first(a) = NIL;
    } else {
        while (next(next(q)) != NIL) {
            q = next(q);
        }
        p = next(q);
        next(q) = NIL;
    }
}

// Menghitung panjang list
int length(List a) {
    int jml = 0;
    address p = first(a);
    while (p != NIL) {
        jml++;
        p = next(p);
    }
    return jml;
}

// Mencari elemen berdasarkan ID
address findElement(List a, infotype x) {
    address p = first(a);
    while (p != NIL && info(p).ID != x.ID) {
        p = next(p);
    }
    return p;
}

// Menampilkan seluruh isi list
void printList(List a) {
    if (isEmpty(a)) {
        cout << "List kosong." << endl;
    } else {
        address p = first(a);
        cout << "===== TIMELINE POSTINGAN =====" << endl;
        while (p != NIL) {
            cout << "ID: " << info(p).ID << endl;
            cout << "User: " << info(p).username << endl;
            cout << "Konten: " << info(p).konten << endl;
            cout << "Like: " << info(p).like << endl;
            cout << "------------------------------" << endl;
            p = next(p);
        }
        cout << "Nama: Aradea Satria Permana" << endl;
        cout << "NIM : 103122400014" << endl;
    }
}

// Membagi list menjadi dua bagian (split list)
void splitList(List L, List &L1, List &L2) {
    createNewList(L1);
    createNewList(L2);

    if (isEmpty(L)) {
        cout << "List kosong, tidak dapat di-split." << endl;
        return;
    }

    int n = length(L);
    int mid = n / 2; // titik tengah pembagian

    address p = first(L);
    int i = 0;

    // elemen pertama sampai tengah masuk L1
    while (p != NIL && i < mid) {
        insertLast(L1, newElement(info(p)));
        p = next(p);
        i++;
    }

    // sisanya masuk ke L2
    while (p != NIL) {
        insertLast(L2, newElement(info(p)));
        p = next(p);
    }

    cout << "List berhasil di-split menjadi dua bagian." << endl;
}
