/*
Calcolare la somma degli elementi di posizione pari e quelli di posizione dispari di un
vettore (procedura con 2 parametri per indirizzo) LO ZERO è CONSIDERATO PARI
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void sommaPariDispari(int v[], int *spari, int *sdispari, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if (i % 2 != 0)
        {
            *spari = *spari + v[i];
        } 
        else
        {
            *sdispari = *sdispari + v[i];
        }
    }
    
}

void stampaVet(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", v[i]);
    }
}

int main()
{
    int v[DIM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int spari = 0;
    int sdispari = 0;

    sommaPariDispari(v, &spari, &sdispari, DIM);
    stampaVet(v, DIM);

    printf("\nsomma p. pari: %d\nsomma p. dispari: %d", spari, sdispari);

    return 0;
}
