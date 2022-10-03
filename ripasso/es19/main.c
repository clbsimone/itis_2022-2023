/*
Costruire la tavola pitagorica per i numeri da 0 a 10, in pratica la matrice che ha per
componenti il valore che si ottiene moltiplicando l'indice della riga per l'indice della
colonna.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 11

void caricaMat(int mat[][N], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            mat[i][j] = i * j;
        } 
    }
}

void stampaMat(int mat[][N], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("%3d ", mat[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int mat[N][N];

    caricaMat(mat, N);
    stampaMat(mat, N);

    return 0;
}
