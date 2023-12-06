/*
Usando le funz/proc create nell'esercizio precedente fare un programma che letto un
numero non negativo N e un carattere C, stampare a video un quadrato NxN di caratteri C (a
video NON sembrerà un quadrato, ma fa lo stesso, l'importante è che ci siano N caratteri in
N righe). Per esempio se N=3 e C= 'A' a schermo compare
AAA
AAA
AAA
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int n;
    char c;

    printf("nunero: ");
    n = leggiControlla(n);

    printf("carattere: ");
    leggiCarattere(&c);

    stampa(n, c);

    return 0;
}
