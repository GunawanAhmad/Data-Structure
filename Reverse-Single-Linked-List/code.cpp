#include<iostream>
#include "header.h"

using namespace std;

void createList(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

void createNewElmt(infotype x, address &p) {
    p = new elmlist;
    info(p) = x;
    next(p) = NULL;
}

bool isEmpty(List L) {
    if(first(L) == NULL) {
        return true;
    } else {
        return false;
    }
}

void insertFirst(List &L, address p) {
    bool check = isEmpty(L);
    if(check) {
        first(L) = p;
    } else {
        next(p) = first(L);
        first(L) = p;
    }
}

void printList(List L) {
    address q = first(L);
    while(q != NULL) {
        cout<<info(q)<<" ";
        q = next(q);
    }
    cout<<endl;
}

void reverse_List(List &L) {
    address reversed = first(L);
    address todo = next(reversed);
    next(reversed) = NULL;
    address temp;
    while(todo != NULL) {
        temp = todo;
        todo = next(todo);
        next(temp) = reversed;
        reversed = temp;
    }
    first(L) = reversed;
}
