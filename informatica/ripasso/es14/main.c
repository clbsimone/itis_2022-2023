/*
Dato un vettore di reali trovare il minimo e il massimo,
quindi ordinarlo in ordine
decrescente usando un algoritmo studiato e verificare
che il primo e l'ultimo elemento
coincidono con i valori di minimo e massimo trovati
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 5

void stampaVett(float vett[], int dim)
{
    for (int k = 0; k < dim; k++)
    {
        printf("%.2f\t", vett[k]);
    }
}

void riempiVett(float vett[], int dim)
{
    for (int k = 0; k < dim; k++)
    {
        printf("inserire il %d numero ", k + 1);
        scanf("%f", &vett[k]);
    }
}

float trovaMin(float vet[], int dim)
{
    int min = vet[0];
    for (int k = 1; k < dim; k++)
    {
        if (vet[k] < min)
        {
            min = vet[k];
        }
    }
    return min;
}

float trovaMax(float vet[], int dim)
{
    int max = vet[0];
    for (int k = 1; k < dim; k++)
    {
        if (vet[k] > max)
        {
            max = vet[k];
        }
    }
    return max;
}

void scambioFloat(float *n1, float *n2)
{
    float temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void ordinaVettDec(float v[], int dim)
{
    int mn;
    int i, j;
    for (i = 0; i < dim - 1; i++)
    {
        mn = i;
        for (j = i + 1; j < dim; j++)
        {
            if (v[j] > v[mn])
            {
                mn = j;
            }
        }

        scambioFloat(&v[i], &v[mn]);
    }
}

bool controllaCorretto(float vet[], int dim, float nmax, float nmin)
{
    bool corretto = false;
    if (vet[0] == nmax && vet[dim - 1] == nmin)
    {
        corretto = true;
    }
    return corretto;
}

int main()
{

    int dim = DIM;
    float vett[dim];

    riempiVett(vett, dim);

    float min = trovaMin(vett, dim);
    float max = trovaMax(vett, dim);

    printf("\nil minimo e': %.2f, il massimo e: %.2f\n", min, max);

    ordinaVettDec(vett, dim);
    stampaVett(vett, dim);

    if (controllaCorretto(vett, dim, max, min))
    {
        printf("\ncorretto");
    }
    else
    {
        printf("\nerrore");
    }
}