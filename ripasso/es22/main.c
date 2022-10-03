/*
Data una matrice NRxNC caricata da file, creare il vettore colonna di lunghezza NC
contenente la somma delle colonne della matrice
*/

#include <stdio.h>
#include <stdlib.h>

#define NR 3
#define NC 4

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
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

void sommaRighe(int mat[][NC], int vet[], int nr, int nc)
{
    int somma = 0;

    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < nr; j++)
        {
            somma = somma + mat[j][i];
        }

        vet[i] = somma;
        somma = 0;
    }
}

void stampaVet(int vet[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("cella %d = %d\n", i + 1, vet[i]);
    }
}

int main()
{
    int mat[NR][NC];
    int nr = NR;
    int nc = NC;
    int colonna[NC];

    FILE *fp;

    fp = fopen("file.txt", "r");

    if (fp != NULL)
    {
        leggiFile(fp, mat, NR, NC);
        stampaMat(mat, nr, nc);
        sommaRighe(mat, colonna, NR, NC);
        stampaVet(colonna, NC);
    }
    else
    {
        printf("errore file");
    }

    fclose(fp);

    return 0;
}
