#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int dato;
    struct node *next; // e un puntatore che punta al nodo sucessivo
} Node;

void printList(Node *l)
{
    while (l != NULL)
    {
        printf("%d ", l->dato);
        l = l->next;
    }
}

void inserimentoOrdinato(Node **head, Node *element)
{
    Node *curr = *head, *prev = NULL;

    while (curr != NULL)
    {
        if (element->dato <= curr->dato)
            break;

        prev = curr;
        curr = curr->next;
    }
    
    if (prev == NULL)
        *head = element;
    else
        prev->next = element;

    element->next = curr;
}

// restituisce la posizione del nodo tovato
Node *ricerca(Node *testa, int dato)
{
    while (testa != NULL && testa->dato != dato)
    {
        testa = testa->next;
    }

    return testa;
}

void freeList(Node *testa)
{
    Node *tmp;

    while (testa != NULL)
    {
        tmp = testa;
        testa = testa->next;
        free(tmp);
    }
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *nuovo_elemento = NULL;

    for (int i = 0; i < 11; i++)
    {
        nuovo_elemento = (Node *)malloc(sizeof(Node));
        nuovo_elemento->dato = i + 1;
        inserimentoOrdinato(&head, nuovo_elemento);
        // SB: nuovo_elemento->next = head;
        // SB: head = nuovo_elemento;
    }
    printf("%p -> %d\n", ricerca(head, 2), ricerca(head, 2)->dato);
    printList(head);
    freeList(head);

    return 0;
}
