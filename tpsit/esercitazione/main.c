/*
- Creare un file .csv con COGNOME, NOME, NASCITA (annomesegiorno formato int)
- scorre il file con la funzione FGETS e STRTOK
- stampare in ordine DECRESCENTE (dal più grande al più piccolo) utilizzando i puntatori e allocazione dinamica (MALLOC)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LUNG 1024

typedef struct
{
    char *cognome;
    char *nome;
    int anno;
} Persona;

int contaRighe(FILE *fp, char *riga, int lung)
{
    int cont = 0;

    while (fgets(riga, lung, fp))
    {
        cont++;
    }

    return cont;
}

void leggiFile(FILE *fp, Persona *p, char *riga, int lung)
{
    int i = 0;
    while (fgets(riga, lung, fp))
    {
        (p + i)->cognome = strdup(strtok(riga, ","));
        (p + i)->nome = strdup(strtok(NULL, ","));
        (p + i)->anno = atoi(strtok(NULL, "\n"));

        // printf("%d) %s, %s, %d\n", i + 1, (p + i)->cognome, (p + i)->nome, (p + i)->anno);

        i++;
    }
}

void bubbleSort(Persona *p, int dim)
{
    for (int i = dim - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((p + i)->anno < (p + j)->anno)
            {
                Persona temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

void stampa(Persona *p, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d) %s,%s,%d \n", i + 1, (p + i)->cognome, (p + i)->nome, (p + i)->anno);
    }
}

int main(int argc, char const *argv[])
{
    // apertura file
    FILE *fp;
    fp = fopen("file.csv", "r");

    Persona *p;
    char *riga;
    int nr;

    // controllo se il file
    if (fp == NULL)
    {
        printf("errore file");
    }
    else
    {
        riga = (char *)malloc(sizeof(char) * LUNG);

        // conta righe
        nr = contaRighe(fp, riga, LUNG);
        // printf("%d", nr);

        // chiusura file
        fclose(fp);

        // riapertura file
        fp = fopen("file.csv", "r");

        // malloc persona
        p = (Persona *)malloc(sizeof(Persona) * nr);

        // salvare i dati nella struct persona
        leggiFile(fp, p, riga, LUNG);

        // ordinamento decrescente
        bubbleSort(p, nr);

        // stampa
        stampa(p, nr);
    }

    fclose(fp);
    return 0;
}
