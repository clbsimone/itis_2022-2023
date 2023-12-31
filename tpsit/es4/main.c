/*
lista in C
*/

#include <stdio.h>
#include <stdlib.h>

// creazione del nodo
struct node
{
    char *name;
    struct node *next;
};

void printList(struct node *p)
{
    while (p != NULL)
    {
        printf("%s\n", p->name);
        p = p->next;
    }
}

int main()
{
    // inizializzazione dei nodi
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // allocazione della memoria con l'utilizzo della malloc
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // assegnamento dei nomi
    one->name = "simone";
    two->name = "samuele";
    three->name = "alessio";

    // connessione dei nodi
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    // stampa valori dei nodi
    printList(head);

    free(one);
    free(two);
    free(three);
}