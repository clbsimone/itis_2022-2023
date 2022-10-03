/*
Utilizzando la procedura POT2(x) e la funzione in C sqrt(x) crea la funzione IPOTENUSA() che
dati i due cateti restituisce l'ipotenusa. Creare un main che testi questa funzione.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float leggiNumero()
{
    float n;

    do
    {
        scanf("%f", &n);
    } while (n < 0);

    return n;
}

void potenzaDue(float *n)
{
    *n = *n * *n;
}

float ipotenusa(float a, float b)
{
    float ip;
    
    potenzaDue(&a);
    potenzaDue(&b);

    ip = sqrt(a + b);

    return ip;
}

void stampa(float ip)
{
    printf("ipotenusa = %.2f", ip);
}

int main(int argc, char const *argv[])
{
    float a, b;
    float ip;

    printf("primo numero: ");
    a = leggiNumero();

    printf("secondo numero: ");
    b = leggiNumero();
    
    ip = ipotenusa(a, b);

    stampa(ip);

    return 0;
}
