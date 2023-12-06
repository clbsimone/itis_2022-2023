/*
Dato un vettore A di interi creare i vettori PARI e DISPARI formati rispettivamente
dagli elementi pari in posizione dispari e dispari in posizione pari presenti in A
[10, 12, 13, 1] PARI[12] DISPARI[13]
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 4

void stampaVet(int v[], int dim)
{
    for (int k = 0; k < dim; k++)
    {
        printf("%d ", v[k]);
    }
}

void riempiPariDispari(int v[], int dim, int pari[], int disp[], int *pa, int *di)
{
    int p, d;
    p = 0;
    d = 0;
    
    for (int i = 0; i < dim; i++)
    {
        if (v[i] % 2 == 0 && i % 2 != 0)
        {
            pari[p] = v[i];
            p++;
        }
        else if (v[i] % 2 != 0 && i % 2 == 0)
        {
            disp[d] = v[i];
            d++;
        }
    }

    *pa = p;
    *di = d;
}

int main()
{
    int pari[DIM], dispari[DIM];
    int v[] = {10, 12, 13, 1};
    int p, d;

    printf("iniziale: ( ");
    stampaVet(v, DIM);
    printf(")");

    riempiPariDispari(v, DIM, pari, dispari, &p, &d);

    printf("\npari: ( ");
    stampaVet(pari, p);
    printf(")");

    printf("\ndispari: ( ");
    stampaVet(dispari, d);
    printf(")");
    
    return 0;
}