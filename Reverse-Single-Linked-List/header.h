#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define info(p) p->info
#define next(p) p->next
#define first(L) L.first

#include<iostream>


typedef int infotype;
typedef struct elmlist *address;
struct List
{
    address first;
};

struct elmlist
{
    infotype info;
    address next;
};


bool isEmpty(List L);
void createList(List &L);
void createNewElmt(infotype x, address &p);
void insertFirst(List &L, address p);
void printList(List L);
void reverse_List(List &L);

#endif // HEADER_H_INCLUDED
