/*
Usando le funz/proc create degli esercizi precedenti stampare triangolo fare un programma
che letto un numero non negativo H e un carattere C, stampare a video un triangolo
rettangolo isoscele di altezza H. Per esempio se H = 3

X
XX
XXX
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

void stampaRiga(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}

void stampaTriangolo(char c, int n)
{
    int i = 0;

    for (i = 0; i < n + 1; i++)
    {
        stampaRiga(c, i);
        printf("\n");
    }
}

int main()
{
    int n;
    char c;

    printf("nunero: ");
    n = leggiControlla(n);

    printf("carattere: ");
    leggiCarattere(&c);

    stampaTriangolo(c, n);

    return 0;
}