/*
Data una matrice rettangolare MAT (MxN), di interi, già carica, calcolare quanti sono
gli elementi simmetrici rispetto all’asse verticale.

11 11
11 11
11 11
11 11
*/

#include <stdio.h>
#include <stdlib.h>

#define NR 4
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

int elementiSimmetrici(int mat[][NC], int nr, int nc)
{
    int contsimmetrici = 0;
    for (int i = 0; i < nr; i++)
    {
        int k = nc - 1;
        for (int j = 0; j < nc / 2; j++)
        {
            if (mat[i][j] == mat[i][k])
            {
                contsimmetrici++;
            }

            k--;
        }
    }

    return contsimmetrici;
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

int main(int argc, char const *argv[])
{
    FILE *fp;

    fp = fopen("file.txt", "r");
    int mat[NR][NC];
    int simmetrici;

    if (fp != NULL)
    {
        leggiFile(fp, mat, NR, NC);
        stampaMat(mat, NR, NC);

        simmetrici = elementiSimmetrici(mat, NR, NC);

        printf("simmetrici = %d", simmetrici);
    }
    else
    {
        printf("errore file");
    }

    fclose(fp);

    return 0;
}
