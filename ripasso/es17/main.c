/*
Creare upper(s), funzione che converte in maiuscolo tutti i caratteri di s. Utilizzare la
funzione isMinuscolo(car)

97->122 -32
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 10

void riempiStringa(char str[])
{
    scanf("%s", str);
}

bool isMinuscolo(char c)
{
    return (c >= 97 && c <= 122);
}

void upper(char str[])
{
    int i = 0;
    bool v;

    while (str[i] != '\0')
    {
        v = isMinuscolo(str[i]);

        if (v == true)
        {
            str[i] = str[i] - 32;
            printf("%c", str[i]);
        }
        else
        {
            printf("%c", str[i]);
        }

        i++;
    }
}

int main()
{
    char str[DIM];

    printf("stringa: ");
    riempiStringa(str);

    upper(str);

    return 0;
}
