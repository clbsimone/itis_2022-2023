/*
Creare la funzione isTriangolo() che, dati 3 numeri, restituisce true/1 se possono essere le
misure di un triangolo, false/0 altrimenti. Creare un main che testi questa funzione.

a+b > c, a+c > b, c+b > a
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float leggiNumero()
{
    float n;

    do
    {
        scanf("%f", &n);
    } while (n < 0);
    
    return n;
}

bool isTriangolo(float a, float b, float c)
{
    bool v;
    if ((a + b > c) && (a+c > b) && (c+b > a))
    {
        v = true;
    }
    else
    {
        v = false;
    }
    
    return v;
}

void stampa(bool v)
{
    if (v == true)
    {
        printf("e' un triangolo");
    } 
    else
    {
        printf("non e' un triangolo");
    }
}

int main(int argc, char const *argv[])
{
    float a, b, c;
    bool v;

    printf("a: ");
    a = leggiNumero();

    printf("b: ");
    b = leggiNumero();

    printf("c: ");
    c = leggiNumero();

    v = isTriangolo(a, b, c);

    stampa(v);
    
    return 0;
}
