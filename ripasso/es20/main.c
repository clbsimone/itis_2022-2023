/*
I dati sugli incassi di 3 reparti di un magazzino nei primi 6 mesi sono organizzati in
una matrice, il numero di riga indica il numero del reparto, il numero di colonna indica
il mese. Calcolare l'incasso totale per ogni mese, l'incasso totale per ogni reparto e
l'incasso totale per tutti i reparti nel periodo considerato. (programma a menù)
        mesi
reparti 1 2 3 4
        1 2 3 4
        1 2 3 4
*/

#include <stdio.h>
#include <stdlib.h>

#define NR 3
#define NC 6

void menu()
{
    printf("1 = incasso per ogni mese \n");
    printf("2 = incasso per ogni reparto \n");
    printf("3 = incasso per tutti i reparti in un mese \n");
    printf("0 = esci \n");
}

void caricaMat(int mat[][NC], int nr, int nc)
{
    for (int i = 0; i < nr; i++)
    {
        printf("\n\nreparto %d: \n", i + 1);
        for (int j = 0; j < nc; j++)
        {
            printf("mese %d: ", j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

int leggiNum()
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x < 0 && x > 3);

    return x;
}

int leggiMese()
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x < 0 && x > 6);

    return x;
}

void incassoMese(int mat[][NC], int nr, int nc)
{
    int somma = 0;

    int i = 0;
    int j = 0;

    for (i = 0; i < nc; i++)
    {
        for (j = 0; j < nr; j++)
        {
            somma = somma + mat[j][i];
        }

        printf("mese %d, somma = %d\n", i + 1, somma);
        somma = 0;
    }
}

void incassoReparto(int mat[][NC], int nr, int nc)
{
    int somma = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            somma = somma + mat[i][j];
        }

        printf("reparto %d, somma = %d\n", i + 1, somma);
        somma = 0;
    }
}

void incassoRepartiMese(int mat[][NC], int nr, int nc, int m)
{
    int i = 0;
    int j = 0;

    int somma = 0;
    for (i = 0; i < nc; i++)
    {
        if (i + 1 == m)
        {
            for (j = 0; j < nr; j++)
            {
                somma = somma + mat[j][i];
            }

            printf("mese %d, somma = %d\n", m, somma);
            somma = 0;
        }
    }
}

void stampa(int mat[][NC], int nr, int nc)
{
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int mat[NR][NC];
    int s = 10;
    int m = 0;

    caricaMat(mat, NR, NC);
    stampa(mat, NR, NC);
    while (s != 0)
    {
        menu();

        printf("menu: ");
        s = leggiNum();

        if (s == 1)
        {
            incassoMese(mat, NR, NC);
        }
        else if (s == 2)
        {
            incassoReparto(mat, NR, NC);
        }
        else
        {
            printf("mese: ");
            m = leggiMese();
            incassoRepartiMese(mat, NR, NC, m);
        }
    }

    return 0;
}
