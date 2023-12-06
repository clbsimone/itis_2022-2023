#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int x;
    struct node* next;
} Node;

bool isEmpty(Node *head){
    if (head == NULL) return true;
    return false;
}

void push(Node **head, Node *element){
    if (isEmpty(*head)){
        *head = element;
        element->next = NULL;
    } else {
        element->next = *head;
        *head = element;
    }
}

Node *pop(Node **head){
    Node  *ret = *head;

    if (isEmpty(*head))
        return NULL;
    else
        *head = ret->next;

    return ret;
}

void stampaLista(Node *head){
    if (isEmpty(head)) {
        printf("la lista le voida");
        return;
    }

    Node *tmp = head;
    while (tmp != NULL){
        printf("%d\n", tmp->x);
        tmp = tmp->next;
    }
}

void caricaPila(Node *head){
    head = (Node*) malloc(sizeof(Node));
    Node *element = NULL;

    for (int i = 0; i < 5; ++i) {
        element = (Node*) malloc(sizeof(Node));
        element->x = i + 1;
        push(&head, element);
    }

    printf("Prima:");
    stampaLista(head);

    for (int i = 0; i < 2; ++i) {
        printf("%d - ", pop(&head)->x);
    }

    printf("\nDopo:");
    stampaLista(head);
}




void enqueue(Node **head, Node **tail, Node *element){
    if (isEmpty(*head))
        *head = element;
    else
        (*tail)->next = element;

    *tail = element;
    element->next = NULL;
}

Node *dequeeue(Node **head, Node **tail){
    Node *ret = *head;

    if (isEmpty(*head))
        return NULL;
    else
        *head = ret->next;

    if (*head == NULL)
        *tail = NULL;

    return ret;
}

void caricaCoda(Node* head, Node* tail){
    // head = (Node*) malloc(sizeof(Node));
    // tail = (Node*) malloc(sizeof(Node));
    Node *element = NULL;

    for (int i = 0; i < 10; ++i) {
        element = (Node*) malloc(sizeof (Node));
        element->x = i+1;

        enqueue(&head, &tail, element);
    }

    //stampaLista(head);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", dequeeue(&head, &tail)->x);
    }
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    // SB: caricaPila(head);
    caricaCoda(head, tail);
}