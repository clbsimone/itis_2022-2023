/*
Usando la funzione dell'esercizio precedente, scrivere la funzione isIsoscele() che, dati 3
numeri, restituisce true/1 se possono essere le misure di un triangolo isoscele, false/0
altrimenti. Creare un main che testi questa funzione.
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

bool isIsoscele(float a, float b, float c)
{
    bool v = false;

    if (a == b || a == c || b == c)
    {
        v = true;
        
        if (a == b && b == c)
        {
            v = false;
        }
    }

    return v;
}

bool isTriangolo(float a, float b, float c)
{
    bool v;
    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        v = isIsoscele(a, b, c);
    }
    else
    {
        printf("non e' un triangolo");
        exit(1);
    }

    return v;
}

void stampa(bool v)
{
    if (v == true)
    {
        printf("triangolo isoscele");
    } 
    else
    {
        printf("non e' un triangolo isoscele");
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
