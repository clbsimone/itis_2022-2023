#include <stdio.h>
#include <stdlib.h>

#define DIM 10

/*
   per la locazione DINAMICA c'e' bisogno della malloc,
   che ritorna un puntatore a void void*
*/

int main(int argc, char const *argv[])
{
    int a[DIM]; // locazione STATICA

    int *array; //locazione DINAMICA
    array = (int *)malloc(sizeof(int) * 10); //sizeof numero di biyte che quel tipo occupa in memoria

    free(array);
    return 0;
}
