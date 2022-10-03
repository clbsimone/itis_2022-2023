/*
Crea la procedura INVERTI(x) che inverte le cifre del suo parametro che deve essere un
intero positivo. Per esempio se x = 12 alla fine x=21. Creare un main che testi questa
funzione.
*/

#include <stdio.h>
#include <stdlib.h>

int leggiNumero()
{
    int n;

    do
    {
        scanf("%d", &n);
    } while (n < 0);

    return n;
}

/*
PROVA FUNZIONE

x = 124;
inv = 0;

vero;

ivn * 10 = 0;
inv + (x % 10 = 4) = 4;
x / 10 = 12;

vero;

inv * 10 = 40;
inv + (x % 10 = 2) = 42;
x / 10 = 1;

vero;

inv * 10 = 420;
inv + (x % 10 = 1) = 421;
x / 10 = 1;

falso;
*/

void inverti(int *x)
{
    int temp = 0;

    while (*x > 0)
    {
        temp = temp * 10;
        temp = temp + (*x % 10);
        *x = *x / 10;
    }
    *x = temp;
}

int main(int argc, char const *argv[])
{
    int x;

    printf("numero: ");
    x = leggiNumero();
    inverti(&x);

    printf("invertito: %d", x);

    return 0;
}
