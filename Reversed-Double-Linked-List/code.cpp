#include<iostream>
#include "header.h"

using namespace std;

void createList(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

infotype createElmt(infotype x) {
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;
    prev(p) = NULL;
}

void insertFirst(List &L, infotype x) {
    address p = createElmt(x);
    if(first(L)==NULL) {
        first(L) = p;
    } else {
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
}

void insertLast(List &L, infotype x) {
    address p = createElmt(x);
    if(first(L)==NULL) {
        insertFirst(L, x);
    } else {
        next(last(L)) = p;
        last(L) = p;
    }
}

void insertAfter(address prec, infotype x) {
    address p = createElmt(x);
    address q = first(L);
    while(q != NULL) {
        if(prec == q) {
            prev(next(prec)) = p;
            next(p) = next(prec);
            prev(p) = prec;
            next(prec) = p;
        }
        q = next(q)
    }
}

void printList(List L) {
    address p = first(L);
    while(p != NULL) {
        cout<<info(p)<<" ";
        p = next(p);
    }
    cout<<endl;
}
