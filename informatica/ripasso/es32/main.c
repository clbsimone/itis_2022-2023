/*
Dato un file di testo "numeri.dat" contenente dei numeri reali, leggerli e infine salvare
nel file "risultati.dat" il valore medio. Attenzione il file può non esistere o essere vuoto
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int letturaFile(FILE *fl, int v[])
{
    int i;

    if (fl != NULL)
    {
        i = 0;
        while (fscanf(fl, "%d", &v[i]) != EOF)
        {
            i++;
        }
    }
    else
    {
        printf("errore file lettura\n");
    }

    return i;
}

void stampaVet(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", v[i]);
    }
}

float media(int v[], int dim)
{
    float somma = 0;
    float media;
    for (int i = 0; i < dim; i++)
    {
        somma = somma + v[i];
    }

    media = somma / dim;

    return media;
}

void stampaFile(FILE *fs, int v[], int dim)
{
    if (fs != NULL)
    {
        for (int i = 0; i < dim; i++)
        {
            fprintf(fs, "%d ", v[i]);
        }
        fprintf(fs, "\n");

        fprintf(fs, "media = %.2f", media(v, dim));
    }
    else
    {
        printf("errore file scrittura\n");
    }
}

int main(int argc, char const *argv[])
{
    FILE *fl;
    FILE *fs;

    int v[DIM];
    int l;

    fl = fopen("numeri.dat", "r");
    fs = fopen("risultati.dat", "w");

    l = letturaFile(fl, v);
    stampaVet(v, l);
    stampaFile(fs, v, l);

    fclose(fl);
    fclose(fs);
    return 0;
}
