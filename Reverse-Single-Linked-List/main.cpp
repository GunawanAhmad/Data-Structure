#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    List L;
    createList(L);
    address ad;
    createNewElmt(1, ad);
    insertFirst(L, ad);
    createNewElmt(2,ad);
    insertFirst(L, ad);
    createNewElmt(3,ad);
    insertFirst(L, ad);
    printList(L);
    cout<<"Reversed List "<<endl;
    reverse_List(L);
    printList(L);



    return 0;
}
