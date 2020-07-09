#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define info(p) p->info
#define next(p) p->next
#define prev(p) p->prev
#define first(L) L.first
#define last(L) L.last
#include<iostream>


typedef int infotype;
typedef struct elmlist *address;
struct List {
    address first;
    address last;
};

struct elmlist {
    infotype info;
    address next;
    address prev;
};

bool isEmpty(List L);
void insertFirst(List &L, infotype x);
void insertLast(List &L, infotype x);
void insertAfter(address prec, infotype x);
void insertList(List &L, infotype x);
void createList(List &L);
address createElmt(infotype x);
void printList(List L);
void reverse_List(List &L);


#endif // HEADER_H_INCLUDED
