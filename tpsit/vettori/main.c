#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main()
{
    int v[DIM];     //vettore con una dimensione fissa;
    int *a;         //vettore locazione dinamica, permette di calcolare la lunghezza precisa del vettore

    a = v;

    *(a + 0) = 1;
    *(a + 1) = 2;
    *(a + 2) = 3;
    *(a + 3) = 4;
    *(a + 4) = 5;

    printf("vettore 1: ");
    for (int i = 0; i < DIM; i++)
    {
        printf("%d ", *(a + i));
    }

    printf("\nvettore 2: ");

    while ((a - v) < DIM) // puntatore array iniziale ci restituisce la posizione
    {
        printf("%d ", *(a++));

    }

    char s[DIM];
    char *str;

    str = s;

    *(str + 0) = 'j';
    *(str + 1) = 'o';
    *(str + 2) = 'r';
    *(str + 3) = 'd';
    *(str + 4) = 'y';
    *(str + 5) = '\0';

    while (str - s < DIM)
    {
        printf("%c", *(str++));
    }
    


    return 0;
}
