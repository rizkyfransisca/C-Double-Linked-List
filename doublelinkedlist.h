#ifndef DOUBLELINKEDLIST_H_INCLUDED
#define DOUBLELINKEDLIST_H_INCLUDED
/*Nama: Kadek Rizky Fransisca Putra
  Nim : 1301194035
*/
using namespace std;
typedef int infotype;
typedef struct elmtList *address;
struct elmtList{
    infotype info;
    address prev;
    address next;
};
struct List{
    address first;
    address last;
};
bool isEmpty(List L);
void createList(List &L);
void createNewElmt(infotype X, address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address &Prec, address &P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address &Prec, address &P);
void deleteLast(List &L, address &P);
void concat(List L1, List L2, List &L3);
void lihatlist(List L);
float median(List L);
void insertDescending(List &L , address &P);

#endif // DOUBLELINKEDLIST_H_INCLUDED
