/*
Fare un programma che letto un numero non negativo N e un carattere C, stampi a video N
volte C Per esempio se N=4 e C= 'A' a schermo compare AAAA
*/

#include <stdio.h>
#include <stdlib.h>

int leggiControlla(int n)
{
    do
    { 
        scanf("%d", &n);
    } while (n < 0);

    return n;
}

void leggiCarattere(char *c)
{
    fflush(stdin);
    scanf("%c", c);
}

void stampa(int n, char c)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}

int main()
{
    int n;
    char c;

    printf("numero: ");
    n = leggiControlla(n);

    printf("carattere: ");
    leggiCarattere(&c);

    stampa(n, c);
}