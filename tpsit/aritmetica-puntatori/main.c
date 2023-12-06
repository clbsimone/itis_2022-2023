#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *p1;
    int *p2;

    p1 = p2;

    p1 = p1++;

    printf("cella iniziale: %d\n", p2);
    printf("cella + 1: %d\n", p1);
    return 0;
}
