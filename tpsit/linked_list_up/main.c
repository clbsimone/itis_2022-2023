/*
crea  una  lista e la  stampa, con funzioni
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int x;
    struct node *next;
} Node;

// il ** perche devo poi andare ad assegnarlo alla nuova testa (new_head)
void insertHead(Node **head, int new_x)
{
    Node *new_head = (Node*)malloc(sizeof(Node));

    if(new_head != NULL)
    {
        // carico il nuovo valore nel nuovo node
        new_head->x = new_x;

        // il next punterà all'attuale testa
        new_head->next = (*head);

        // assegno la nuova testa
        (*head) = new_head;
    } else
        printf("errore");
}

void printList(Node *l)
{
    while (l != NULL)
    {
        printf("%d - %p \n", l->x, l->next);
        l = l->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = (Node*)malloc(sizeof(Node) * 3);
    int c = 3;

    for (int i = 0; i < 3; i++)
    {
        insertHead(&head, c--);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", head->x);
        head = head->next;
    }

    // printList(head);
    return 0;
}
