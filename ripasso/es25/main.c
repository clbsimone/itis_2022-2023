/*
Dire se una matrice è speculare rispetto all'asse verticale
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NR 6
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

bool speculare(int mat[][NC], int nr, int nc)
{
    int i = 0;
    bool spec = true;

    while (i < nr && spec == true)
    {
        int j = 0;
        int k = nc - 1;
        while (j < nc && spec == true)
        {
            if (mat[i][j] != mat[i][k])
            {
                spec = false;
            }

            k--;
            j++;
        }

        i++;
    }

    return spec;
}

void stampa(bool spec)
{
    if (spec == true)
    {
        printf("speculare");
    }
    else
    {
        printf("non speculare");
    }
}

int main(int argc, char const *argv[])
{
    FILE *fp;
    int mat[NR][NC];
    bool spec;

    fp = fopen("file.txt", "r");

    if (fp != NULL)
    {
        leggiFile(fp, mat, NR, NC);
        stampaMat(mat, NR, NC);
        spec = speculare(mat, NR, NC);
        stampa(spec);
    }
    else
    {
        printf("errore file");
    }

    fclose(fp);

    return 0;
}
