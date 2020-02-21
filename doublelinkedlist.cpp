#include <iostream>
#include "doublelinkedlist.h"
using namespace std;
/*Nama: Kadek Rizky Fransisca Putra
  Nim : 1301194035
*/
bool isEmpty(List L){
    bool cek;
    if(L.first == NULL){
        cek = true;
    }else{
        cek = false;
    }
    return cek;
}
void createList(List &L){
    L.first = NULL;
    L.last = NULL;
}
void createNewElmt(infotype X, address &P){
    P = new elmtList;
    P->info = X;
    P->next = NULL;
    P->prev = NULL;
}
void insertFirst(List &L, address P){
    if(isEmpty(L)==true){
        L.first = P;
        L.last = P;
    }
    else{
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}
void insertAfter(List &L, address &Prec, address &P){
    if(isEmpty(L)==true){
        cout<<"List masih kosong !";
    }
    if(Prec->next == NULL){
        P->prev = Prec;
        Prec->next = P;
        L.last = P;
    }
    else{
        P->next = Prec->next;
        Prec->next = P;
        P->next->prev = P;
        P->prev = Prec;
    }

}
void insertLast(List &L, address P){
    if(L.first == NULL){
        L.first = P;
        L.last = P;
    }
    else{
        L.last->next =P;
        P->prev = L.last;
        L.last = P;
    }
}
void deleteFirst(List &L, address &P){
    if(L.first == NULL){
        L.first = NULL;
        L.last = NULL;
    }
    else{
        P = L.first;
        L.first = P->next;
        P->next = NULL;
        L.first->prev = NULL;
    }
}
void deleteAfter(List &L, address &Prec, address &P){
    P = Prec->next;
    Prec->next = P->next;
    P->next->prev = Prec;
    P->next = NULL;
    P->prev = NULL;
}
void deleteLast(List &L, address &P){
    P = L.last;
    L.last = P->prev;
    P->prev = NULL;
    L.last->next = NULL;
}
void lihatlist(List L){
    address bantuan = L.first;
    while(bantuan != NULL){
        cout<< bantuan->info << ", ";
        bantuan = bantuan->next;
    }
    cout<<endl;
}
void concat(List L1, List L2, List &L3){
    L3.first = L1.first;
    L3.last = L2.last;
    L2.first->prev = L1.last;
    L1.last->next = L2.first;

}
float median(List L){
    address bantuan , bantuan1;
    int i, j,k;
    float inimedian;
    bantuan = L.first;
    i = 1;
    while(bantuan->next != NULL){
        bantuan = bantuan->next;
        i++;
    }
    k =  i /2;
    bantuan1 = L.first;
    if(i%2==0){
        j=1;
        while(j < k){
            bantuan1 = bantuan1->next;
        j++;
        }
        inimedian = (double)(bantuan1->info + bantuan1->next->info)/2;
    }else if(i%2!=0) {
        j=1;
        while(j < k){
        bantuan1 = bantuan1->next;
        j++;
        inimedian = (double)bantuan1->next->info;
        }
    }
    return inimedian;
}
void insertDescending(List &L ,address  &P){
   address bantuan1 = L.first;
    if(L.first == NULL || L.first->info > P->info){
        insertFirst(L,P);
    }else if(L.last->info < P->info){
        insertLast(L,P);
    }else if(bantuan1->info < P->info){
        while(bantuan1->next->info <  P->info){
            bantuan1 = bantuan1->next;
        }

       insertAfter(L,bantuan1,P);
    }


}


