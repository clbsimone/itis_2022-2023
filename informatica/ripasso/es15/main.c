/*
Creare una stringa random 32-126 lunga n caratteri
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int leggiNum()
{   
    int n;

    do
    {
        scanf("%d", &n);
    } while (n < 0);
    
    return n;
}

void randomN(char str[], int dim)
{
    srand(time(NULL));

    for (int i = 0; i < dim; i++)
    {
        str[i] = 32 + rand() % 126;
    }
}

void stampa(char str[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    printf("dim: ");
    int x = leggiNum();
    char str[x];

    randomN(str, x);
    stampa(str, x);
    
    return 0;
}

