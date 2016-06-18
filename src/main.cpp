#include <iostream>
#include <stdlib.h>
//VMeta Company 20142271 Manuel Oleaga
using namespace std;
typedef struct nodo element;
struct nodo{
    int dato;
    nodo *next;
    nodo *previous;
};

element *newnodo(){
    return ((element*) malloc (sizeof(element)));
}

int main(int argc, char *argv[])
{
    element *p, *q ,*l, *r;
    char r, r2;
    int c = 1;

    do{
        p=newnodo();
        cout<<"Insert an Item: ";
        cin>>p->dato;

        if (C==1){
            p->next=NULL;
            p->previous=NULL;
            r = p; l = p;
        }
        else{
            cout<<"Do you want to insert left 'l' or rigth 'r'?\n";
            cin>>r2;
            if (r2 == 'r' || r2 == 'R'){
                p -> next = NULL;
                r -> next = p;
                p -> previous = r;
                r = p;
            }
            else{
                p -> previous = NULL;
                l -> previous = p;
                p -> next = l;
                l = p;
            }
        }
        c++;
        cout<<"Do you want to add other Item on the list?";
        cout<<"Y = Yes and N = No...";
        cin>>r;
    }while(r == 's' || r == 'S');

    q=l;
    cout<<"Left\n";

    do{
        count<<"\t"<<q->dato;
        q = q -> next;
    }while (q != NULL);


    q=r;
    cout<<"Rigth"
    do{
        count<<"\t"<<q->dato;
        q =q ->previous;
    }while (q != NULL);
    return 0;
}
