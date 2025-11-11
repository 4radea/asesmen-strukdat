//Aradea Satria Permana - 103122400014
#ifndef SLL_H
#define SLL_H
#include <string>
using namespace std;

#define first(L) (L).first
#define next(P) (P)->next
#define info(P) (P)->info
#define NIL NULL

struct Post {
    int ID;
    string konten;
    int like;
    string username;
};
typedef Post infotype;

struct elmlist {
    infotype info;
    elmlist *next;
};
typedef elmlist* address;

struct List {
    address first;
};

// Deklarasi subprogram
address newElement(infotype data);
void createNewList(List &a);
bool isEmpty(List a);
void insertFirst(List &a, address p);
void insertAfter(List &a, infotype x, address p);
void insertLast(List &a, address p);
void deleteFirst(List &a, address &p);
void deleteLast(List &a, address &p);
int length(List a);
address findElement(List a, infotype x);
void printList(List a);
void splitList(List L, List &L1, List &L2);

#endif