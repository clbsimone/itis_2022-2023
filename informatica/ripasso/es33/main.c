/*
Aggiungere al file precedente "risultati.dat" il valore massimo tra i numeri
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

int valoreMassimo(int v[], int dim)
{
    int max = v[0];
    for (int i = 0; i < dim; i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }

    return max;
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

        fprintf(fs, "media = %.2f\n", media(v, dim));
        fprintf(fs, "massimo = %d\n", valoreMassimo(v, dim));
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