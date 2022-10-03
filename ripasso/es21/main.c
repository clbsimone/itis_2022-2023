/*
Dopo aver caricato in memoria una matrice di interi quadrata di ordine N (con N
inserito da tastiera non superiore a 10), sommare gli elementi della diagonale
principale e quelli della diagonale secondaria
*/

#include <stdio.h>
#include <stdlib.h>

#define N 4

void caricaMat(int mat[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("riga %d: \n", i + 1);

        for (int j = 0; j < n; j++)
        {
            printf("colonna %d: ", j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void stampa(int mat[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

void principale(int mat[][N], int n)
{
    int somma = 0;

    for (int i = 0; i < n; i++)
    {
        somma = somma + mat[i][i];
    }

    printf("principale: %d \n", somma);
}

void secondaria(int mat[][N], int n)
{
    int somma = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                somma = somma + mat[i][j];
            }
        }
    }

    printf("secondaria: %d\n", somma);
}

int main(int argc, char const *argv[])
{
    int mat[N][N];

    caricaMat(mat, N);
    stampa(mat, N);

    principale(mat, N);
    secondaria(mat, N);

    return 0;
}
