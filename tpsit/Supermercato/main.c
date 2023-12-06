//
// Created by Simone Basso on 25/01/23.
//

/*
 * Simulazione cassa supermercato:
 * Fila cassa e una coda
 * Ogni 1/4 minuti arriva un cliente
 * I clienti verranno serviti casualmente tra 1/4 minuti
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char* String;

typedef struct node{
  int numeroCliente;
  struct node *next;
} Node;

bool isEmpty(Node* head){
    if (head == NULL) return true;
    return false;
}

int printList(Node *head) {
    if (isEmpty(head)){
        printf("la coda le voida");
        return 0;
    }

    int lunghezzaLista = 0;
    while (head != NULL) {
        printf("- %d\n", head->numeroCliente);
        head = head->next;
        lunghezzaLista++;
    }

    return lunghezzaLista;
}

void enqueue(Node** head, Node** tail, Node *element){
    if (isEmpty(*head))
        *head = element;
    else
        (*tail)->next = element;
    *tail = element;
    element->next = NULL;
}

Node* dequeue(Node** head, Node** tail){
    Node* ret = *head;

    if (isEmpty(*head))
        return NULL;
    else
        *head = ret->next;

    if (*head == NULL)
        *tail = NULL;

    return ret;
}

void printElement(int numeroCliente, int attesaEntrataInCoda){
    printf("- %d", numeroCliente);
    printf(" attesa entata in coda: %d\n", attesaEntrataInCoda);
}

void codaSupermercato(Node *head, Node *tail){
    Node* element = NULL;
    int attesaEntrataInCoda = 0;
    int attesaServizioCassa = 0;
    int contClienti = 0;

    for (int i = 0; i < 720; ++i) {
        if (attesaEntrataInCoda == 0){
            attesaEntrataInCoda = rand() % 4 + 1;
            element = (Node*)malloc(sizeof(Node));

            element->numeroCliente = contClienti;

            enqueue(&head, &tail, element);
            printElement(element->numeroCliente, attesaEntrataInCoda);

            contClienti++;
        }

        if (attesaServizioCassa == 0){
            attesaServizioCassa = rand() % 4 + 1;
            free(dequeue(&head, &tail));
        }

        attesaEntrataInCoda--;
        attesaServizioCassa--;
    }
    printf("\n\nclienti fuori orario: \n");
    int lunghezzaLista = printList(head);

    for (int i = 0; i < lunghezzaLista; ++i) {
        free(dequeue(&head, &tail));
    }

    lunghezzaLista = printList(head);
}

int main(){
    printf("------\n");

    Node* head = NULL;
    Node* tail = NULL;

    codaSupermercato(head, tail);
    // printf("\n\nclienti fuori orario: \n");
    // printList(head);
    printf("\n------\n");
    return 0;
}