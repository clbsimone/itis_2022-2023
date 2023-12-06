#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void insertHead(Node **head, int new_value)
{
    Node *new_head = (Node*)malloc(sizeof(Node));

    if (new_head != NULL)
    {
        new_head->value = new_value;
        
    }
    else
        printf("errore");
}

int main(int argc, char const *argv[])
{
    Node *head = (Node *)malloc(sizeof(Node));

    return 0;
}
