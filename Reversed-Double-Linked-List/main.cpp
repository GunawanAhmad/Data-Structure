#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    List L;
    createList(L);
    insertLast(L, 1);
    insertLast(L, 2);
    insertLast(L, 3);
    printList(L);
    cout<<"Reversed List"<<endl;
    reverse_List(L);
    printList(L);
    return 0;
}
