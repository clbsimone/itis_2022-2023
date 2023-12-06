#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char *nome;
    struct node *next;
} Node;

void addList(struct node **head, char *s)
{
    struct node *new_node = malloc(sizeof(struct node));

    new_node->nome = s; 

    new_node->next = *head;
    *head = new_node;
}

void printList(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%s\n", temp->nome);
        temp = temp->next;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head = NULL;
    char *name;

    name = (char*)malloc(sizeof(char) * 20);

    for(int i = 0; i < 4; i++)
    {
        printf("nome%d: ", i + 1);
        scanf("%s", name);

        addList(&head, name);
    }

    printList(head);
    return 0;
}
