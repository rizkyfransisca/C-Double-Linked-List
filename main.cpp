#include <iostream>
#include "doublelinkedlist.h"
using namespace std;
/*Nama: Kadek Rizky Fransisca Putra
  Nim : 1301194035
*/
int main()
{
    List L;
    address P;
    createList(L);
   createNewElmt(10,P);
   insertDescending(L,P);
    lihatlist(L);
    createNewElmt(1,P);
   insertDescending(L,P);
    lihatlist(L);
    createNewElmt(11,P);
   insertDescending(L,P);
    lihatlist(L);
    createNewElmt(9,P);
   insertDescending(L,P);
    lihatlist(L);
    createNewElmt(9,P);
   insertDescending(L,P);
    lihatlist(L);
   lihatlist(L);
}
