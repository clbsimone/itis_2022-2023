/*
Data una matrice rettangolare MAT (MxN), di interi, già carica, calcolare il minimo, il
massimo e la media dei valori contenuti.
*/

#include <stdio.h>
#include <stdlib.h>

#define NR 3
#define NC 6

void leggiFile(FILE *fp, int mat[][NC], int nr, int nc)
{
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            fscanf(fp, "%d", &mat[i][j]);
        }
    }
}

void stampaMat(int mat[][NC], int nr, int nc)
{
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            printf("%4d", mat[i][j]);
        }

        printf("\n");
    }
}

int minimo(int mat[][NC], int nr, int nc)
{
    int min = mat[0][0];

    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (mat[i][j] < min)
            {
                min = mat[i][j];
            }
        }
    }

    return min;
}

int massimo(int mat[][NC], int nr, int nc)
{
    int max = mat[0][0];

    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (mat[i][j] > max)
            {
                max = mat[i][j];
            }
        }
    }

    return max;
}

float media(int mat[][NC], int nr, int nc)
{
    float med = 0;
    float somma = 0;
    float cont = 0;

    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            somma = somma + mat[i][j];
            cont++;
        }
    }

    med = somma / cont;

    return med;
}

void stampa(int min, int max, float med)
{
    printf("minimo: %d\n", min);
    printf("massimo: %d\n", max);
    printf("media: %.2f\n", med);
}

int main(int argc, char const *argv[])
{
    FILE *fp;
    int mat[NR][NC];
    int min, max;
    float med;

    fp = fopen("file.txt", "r");

    if (fp != NULL)
    {
        leggiFile(fp, mat, NR, NC);
        stampaMat(mat, NR, NC);
        min = minimo(mat, NR, NC);
        max = massimo(mat, NR, NC);
        med = media(mat, NR, NC);
        stampa(min, max, med);
    }
    else
    {
        printf("errore file");
    }

    fclose(fp);
    return 0;
}
