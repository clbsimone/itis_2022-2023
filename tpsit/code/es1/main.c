#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 10

typedef struct node{
    char nome[DIM];
    int x;
    struct node* next;
} Node;

bool isEmpty(Node* head){
    if (head == NULL) return true;
    return false;
}

void enqueque(Node** head, Node** tail, Node* element){
    if (isEmpty(*head))
        *head = element;
    else
        (*tail)->next = element;

    *tail = element;
    element->next = NULL;
}

void printList(Node *head) {
    printf("\n\n");

    while (head != NULL) {
        printf("%s -> %d\n", head->nome, head->x);
        head = head->next;
    }
}

void caricaLista(Node* head, Node* tail, Node* element, int n_giochi){
    for (int i = 0; i < n_giochi; i++){
        element = (Node*) malloc(sizeof(Node));
        printf("nome: ");
        scanf("%s", element->nome);

        printf("valore: ");
        scanf("%d", &element->x);

        enqueque(&head, &tail, element);
    }

    printList(head);
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* element = NULL;

    int n_giochi;

    printf("n gichi: ");
    scanf("%d", &n_giochi);

    caricaLista(head, tail, element, n_giochi);

    return 0;
}