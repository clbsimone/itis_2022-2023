/*
Creare la procedura POT2(x) che eleva alla seconda il suo parametro x, cioè se inizialmente x
=3 alla fine x vale 9 (utilizza il passaggio dei parametri opportuno). Creare un main che testi
questa funzione.
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

void potenzaDue(int *n)
{
    *n = *n * *n;
}

int main(int argc, char const *argv[])
{
    int n;

    printf("numero: ");
    n = leggiNumero();

    potenzaDue(&n);

    printf("potenza = %d", n);
    return 0;
}
