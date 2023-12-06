/*
Usando le funz/proc create degli esercizi precedenti stampare delle strisce pedonali lunghe n
se n=3 saranno così
XX
XX
00
00
XX
XX
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

void stampaStrisce(char c, int n, char c2)
{
    int i = 1;
    int q = 2;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            int j = 0;
            int k = 0;
            for (j = 0; j < q; j++)
            {
                for (k = 0; k < q; k++)
                {
                    printf("%c", c2);
                }
                printf("\n");
            }
        }
        else
        {
            int j = 0;
            int k = 0;
            for (j = 0; j < q; j++)
            {
                for (k = 0; k < q; k++)
                {
                    printf("%c", c);
                }
                printf("\n");
            }
        }
        i++;
    }
    printf("\n");
}

int main()
{
    int n;
    char c;
    char jeffry;

    printf("nunero: ");
    n = leggiControlla(n);

    printf("primo carattere: ");
    leggiCarattere(&c);

    printf("secondo carattere: ");
    leggiCarattere(&jeffry);

    stampaStrisce(c, n, jeffry);

    return 0;
}