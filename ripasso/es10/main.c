/*
Crea la procedura CRESCENTI(x,y,z) che fa in modo che in x finisca il minore dei 3 numeri, in z
il maggiore e in y il numero rimanente.
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

void crescenti(int *x, int *y, int *z)
{
    int l;
    
    if (*x > *y)
    {
        l = *y;
        *y = *x;
        *x = l;
    }

    if (*x > *z)
    {
        l = *z;
        *z = *x;
        *x = l;
    }

    if (*y > *z)
    {
        l = *z;
        *z = *y;
        *y = l;
    }
}

int main()
{
    int x, y, z;

    printf("x: ");
    x = leggiNumero();

    printf("y: ");
    y = leggiNumero();

    printf("z: ");
    z = leggiNumero();

    crescenti(&x, &y, &z);
    printf("x: %d y: %d z: %d", x, y, z);

    return 0;
}
