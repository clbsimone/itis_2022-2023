/*
Data una matrice NRxNC caricata da file, creare il vettore riga di lunghezza NR
contenente la somma delle righe della matrice
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
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            somma = somma + mat[i][j];
        }

        vet[i] = somma;
        somma = 0;
    }
}

void stampaVet(int vet[], int nr)
{
    int somma = 0;

    for (int i = 0; i < nr; i++)
    {
        printf("cella %d = %d\n", i + 1, vet[i]);
    }
}

int main()
{
    int mat[NR][NC];
    int riga[NR];

    FILE *fp;

    fp = fopen("file.txt", "r");

    if (fp != NULL)
    {
        leggiFile(fp, mat, NR, NC);
        stampaMat(mat, NR, NC);
        sommaRighe(mat, riga, NR, NC);
        stampaVet(riga, NR);
    }
    else
    {
        printf("errore file");
    }

    fclose(fp);
    return 0;
}
