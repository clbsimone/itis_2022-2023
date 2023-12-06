#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *a;

    printf("%p", a); //stampa in esadecimale indirizzo cella  

    int *p;
    int i = 10;

    p = &i;

    *p = 20;

    printf("%d", i); //stampa 20
    return 0;
}