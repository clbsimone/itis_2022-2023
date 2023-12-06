/*
 * Implementare una pila in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node{
    struct node *next;
} Node;

bool isEmpty(Node *head){
    if (head == NULL) return true;
    else return false;
}

void push(Node **head, Node *element){
    if(isEmpty(*head)){
        *head = element;
        element->next = NULL;
    } else {
        element->next = *head;
        *head = element;
    }
}

Node *pop(Node **head){
    Node *ret = *head;

    if (isEmpty(*head))
        return NULL;
    else
        *head = ret->next;

    return ret;
}

void dealloca(Node *lista){
    Node *temp;
    if (lista!=NULL)
    {
        temp=lista->next;
        free(lista);
        dealloca(temp);
    }
}

bool controllo(Node *head, Node *new_element, char *c){
    head = malloc(sizeof(Node));
    int cont_aperte = 0;
    int cont_chiuse = 0;
    bool verifica = false;
    for (int i = 0; c[i] != '\0'; ++i) {
        if (c[i] == '{' || c[i] == '[' || c[i] == '(') {
            // SB: printf("in\n");
            cont_aperte++;
        }

        if (c[i] == '}' || c[i] == ']' || c[i] == ')') {
            // SB: printf("out\n");
            cont_chiuse++;
        }
    }

    for (int i = 0; c[i] != '\0'; ++i) {
        // SB: printf("%c ", c[i]);

        if (c[i] == '{' || c[i] == '[' || c[i] == '(') {
            // SB: printf("in\n");
            new_element = malloc(sizeof(Node));
            push(&head, new_element);
        }

        if (cont_aperte == cont_chiuse) {
            if (c[i] == '}' || c[i] == ']' || c[i] == ')') {
                // SB: printf("out\n");
                free(pop(&head));
            }
        } else
            verifica = false;
    }

    if (cont_chiuse > cont_aperte)
        printf("troppe parentesi chiuse \n");
    if (cont_aperte > cont_chiuse)
        printf("troppe parentesi aperte \n");

    if (head->next == NULL){
        verifica = true;
    }

    return verifica;
}

int main(){
    Node *head = NULL;
    Node *new_element = NULL;
    char *c = "{[simone] (basso)}";

    // SB: int len = stringLen(c);
    // SB: printf("%d", len);

    if (controllo(head, new_element, c)) printf("%s\nCORRETTO", c);
    else printf("%s\nERRORE PARENTESI", c);

    free(head);

    return 0;
}