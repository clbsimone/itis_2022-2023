/*
Leggere un file di testo "testo.txt" carattere per carattere, contare le parole presenti
caricando ogni parola in un vettore di stringhe (supporre che non ci siano più di 100
parole di lunghezza massima 20)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 2000
#define SPE 9

int leggiFile(FILE *fp, char s[])
{
    int i;

    if (fp != NULL)
    {
        i = 0;
        while (fscanf(fp, "%c", &s[i]) != EOF)
        {
            i++;
        }
    }
    else
    {
        printf("errore file");
    }
    return i;
}

bool isSpeciale(char stringa[], char speciale[], int pos, int dim)
{
    bool s = false;

    for (int i = 0; i < dim; i++)
    {
        if (stringa[pos] == speciale[i] && stringa[pos - 1] != speciale[i])
        {
            s = true;
        }
    }

    return s;
}

int contParole(char stringa[], char speciale[], int dim)
{
    int cont_parole = 0;

    if (dim > 0)
    {
        cont_parole++;

        for (int i = 0; i < dim; i++)
        {
            if (isSpeciale(stringa, speciale, i, SPE))
            {
                cont_parole++;
            }
        }
    }
    
    return cont_parole;
}

int main(int argc, char const *argv[])
{
    FILE *fp;
    char stringa[DIM];
    char speciali[DIM] = {' ', '!', ',', '"', '(', ')', '.', ';', ':'};
    int n_caratteri;
    int cp;

    fp = fopen("testo.txt", "r");
    n_caratteri = leggiFile(fp, stringa);
    cp = contParole(stringa, speciali, n_caratteri);

    printf("parole = %d", cp);

    fclose(fp);
    return 0;
}
