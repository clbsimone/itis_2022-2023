/*
Caricare un vettore con la tabellina del numero x letto da tastiera (se x è 3 il vettore
conterrà 0,3,6,9,...,30)
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 11

int leggiNumero()
{
    int n;

    do
    {
        scanf("%d", &n);
    } while (n < 0);

    return n;
}

void caricaVet(int v[], int x, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i] = x * i;
    }
}

void stampaVet(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", v[i]);
    }
}

int main(int argc, char const *argv[])
{
    int x;
    int v[DIM];

    printf("x: ");
    x = leggiNumero();
    caricaVet(v, x, DIM);
    stampaVet(v, DIM);

    return 0;
}
