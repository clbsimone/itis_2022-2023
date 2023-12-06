/*
In un concorso, i partecipanti sono sottoposti a 10 prove. I risultati del concorso sono
memorizzati in un array di strutture, che contiene, per ogni concorrente, i seguenti
dati:
• nome: stringa contenente al massimo 20 caratteri, compreso il terminatore;
• punteggi: una sequenza di 10 interi.
• totale: calcola la somma dei punteggi durante il caricamento e verrà usato per la
classifica
Caricare i dati da tastiera e visualizzare per ciascuna prova, chi è il vincitore e con
quale punteggio e quindi la classifica finale.
Esempio di contenuto dell'array di struct:
{"Rossi", {4,6,1,2,0,4,0,1,2,2}},
{"Bianchi", {12,0,9,4,5,2,1,1,0,5}},
{"Verdi", {2,3,7,9,10,4,5,9,7,2}},
{"Astolfi", {0,2,6,1,8,5,9,10,7,8}},

{"Lorenzi", {6,9,7,1,0,0,4,5,2,1}},
{"Franchi", {1,10,11,19,4,7,2,0,2,7}}
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 3
#define DIM_MAX 50
#define LUNG 20

typedef struct
{
    char nome[LUNG];
    int punteggi[DIM];
    int tot;
} Partecipanti;

typedef struct
{
    int n_prova;
    Partecipanti partecipante[DIM_MAX];
} Prove;

int leggiNum()
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x < 0);

    return x;
}

void caricaProve(Prove prova[], int n_partecipanti, int dim)
{
    for (int i = 0; i < 1; i++)
    {
        printf("PROVA %d\n", i + 1);

        for (int j = 0; j < n_partecipanti; j++)
        {
            printf("nome: ");
            scanf("%s", prova[i].partecipante[j].nome);

            for (int k = 0; k < dim; k++)
            {
                printf("punteggio %d: ", k + 1);
                scanf("%d", &prova[i].partecipante[j].punteggi[k]);
            }
        }
    }
}

void totale(Prove prova[], int n_partecipanti, int dim)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            for (int k = 0; k < dim; k++)
            {
                prova[i].partecipante[j].tot = prova[i].partecipante[j].tot + prova[i].partecipante[j].punteggi[k];
            }
        }
    }
}

void stampaProve(Prove prova[], int n_partecipanti, int dim)
{
    for (int i = 0; i < 1; i++)
    {
        printf("PROVA %d\n", i + 1);

        for (int j = 0; j < n_partecipanti; j++)
        {
            printf("{");
            printf("'%s', ", prova[i].partecipante[j].nome);

            for (int k = 0; k < dim; k++)
            {
                printf("%d, ", prova[i].partecipante[j].punteggi[k]);
            }

            printf("}\n");
        }
    }
}

void ordinamentoDec(Prove prova[], int n_partecipanti, int dim)
{
    int scambio = 0;
    int tmp;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n_partecipanti - 1; j++)
        {
            if (prova[i].partecipante[j].tot < prova[i].partecipante[j + 1].tot)
            {
                prova[i].partecipante[n_partecipanti - 1] = prova[i].partecipante[j + 1];
                prova[i].partecipante[j + 1] = prova[i].partecipante[j];
                prova[i].partecipante[j] = prova[i].partecipante[n_partecipanti - 1];
            }
        }

        printf("\n\n");

        for (int k = 0; k < dim; k++)
        {
            stampaProve(prova, n_partecipanti, dim);
        }
    }
}

int main(int argc, char const *argv[])
{
    Prove prova[1];
    int n_partecipanti;

    printf("numero partecipanti: ");
    n_partecipanti = leggiNum();

    caricaProve(prova, n_partecipanti, DIM);
    stampaProve(prova, n_partecipanti, DIM);
    totale(prova, n_partecipanti, DIM);
    ordinamentoDec(prova, n_partecipanti, DIM);

    return 0;
}
