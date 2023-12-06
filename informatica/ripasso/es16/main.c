/*
Cancellare le vocali presenti in una stringa (ciao -> c), usare la funzione
isVocale(car)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isVocale(char c)
{
    return (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' 
    || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u');
}

void cancella(char str[])
{
    bool v;
    int i = 0;

    while(str[i] != '\0')
    {
        v = isVocale(str[i]);

        if (v != true)
        {
            printf("%c", str[i]);
        }

        i++;
    } 
}

int main()
{
    char str[] = {'c', 'i', 'a', 'o', '\0'};

    cancella(str);

    return 0;
}
