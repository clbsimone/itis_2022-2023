#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int dato;
    struct node* next; // punta ad un nodo identico a questo
} Nodo;

void printList(Nodo *head)
{
    while (head != NULL)
    {
        printf("%d ", head->dato);
        head = head->next;
    }
}

// crea un nodo e lo inserisce al interno della nostra lista in testa
void listInsert(Nodo** testa, int nuovo_dato) // passato per riferimento il puntetore alla testa della nostra lista, e facendo cosi' lo possiamo modificare
{
    // alloco lo spazio in mem per un nuovo nodo
    Nodo* nuovo = (Nodo*)malloc(sizeof (Nodo));

    // controllo della malloc
    if (nuovo == NULL)
    {
        printf("errore malloc");
        exit(0);
    }

    nuovo->dato = nuovo_dato;
    nuovo->next = (*testa); // next sara uguale alla vecchia testa, se non ci sono nodi next = NULL

    // cambio la testa
    (*testa) = nuovo;
}
int main()
{
    /*
    Nodo* testa;
    Nodo* nodo1 = NULL;
    Nodo* nodo2 = NULL;
    Nodo* nodo3 = NULL;

    // allocazione di memoria
    nodo1 = (Nodo*) malloc(sizeof(Nodo));
    nodo2 = (Nodo*) malloc(sizeof(Nodo));
    nodo3 = (Nodo*) malloc(sizeof(Nodo));

    // assegnazione valori
    nodo1->dato = 1;
    nodo2->dato = 2;
    nodo3->dato = 3;

    // collegare i nodi fra di loro
    nodo1->next = nodo2;
    nodo2->next = nodo3;
    nodo3->next = NULL;

    // testa punta al nostro primo nodo
    testa = nodo1;

    printList(testa);
    */

    Nodo* testa = NULL;
    listInsert(&testa, 10);
    listInsert(&testa, 20);
    listInsert(&testa, 30);

    printList(testa);

    return 0;
}