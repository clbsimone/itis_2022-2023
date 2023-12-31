/*
crea  una  lista e la  stampa
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
} Node;

void printList(Node *l)
{
    while (l != NULL)
    {
        printf("%d - %p \n", l->num, l->next);
        l = l->next;
    }
}

int contNum(Node *l)
{
    int cont = 0;

    while (l != NULL)
    {
        cont++;
        l = l->next;
    }

    return cont;
}

void printListR(Node *l)
{
    printf("%d - %p \n", l->num, l->next);

    if (l->next != NULL)
        printListR(l->next);
}

void contNumR(Node *l, int cont)
{
    cont++;

    if (l->next != NULL)
        contNumR(l->next, cont);

    if (l->next == NULL)
    {
        printf("cont: %d", cont);
    }
}

void inserimentoOrdinato(Node **head, Node *element)
{
    Node *curr = *head, *prev = NULL;

    while (curr != NULL)
    {
        if (element->num <= curr->num)
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

int main()
{
    int n;
    Node *lista;
    Node *l;
    lista = NULL;

    printf("Inserisci  un  naturale o  -1 per  terminare\n");
    while (n >= 0)
    {
        printf("numero: ");
        scanf("%d", &n);
        if (n >= 0)
        {
            Node *temp;

            temp = (Node*)malloc(sizeof(Node));
            temp->num = n;
            temp->next = NULL;

            inserimentoOrdinato(&lista, temp);
        }
    }

    l = lista;

    printf("\nNON ricorsiva:\nnumeri inseriti: \n");
    printList(l);

    l = lista;
    int cont = contNum(l);
    printf("cont: %d\n", cont);

    printf("\nRICORSIVA:\nnumeri inseriti: \n");
    l = lista;
    printListR(l);

    l = lista;
    cont = 0;
    contNumR(l, cont);

    return 0;
}