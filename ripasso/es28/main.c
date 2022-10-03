/*
Il programma deve permettere nell'ordine le seguenti operazioni:
A. Memorizzare i dati in un vettore di strutture "campionato";
B. Stampare a terminale tutti i nomi delle squadre che hanno fatto un numero di
goal maggiore del numero dei goal subiti.
C. Letto a terminale il nome di una squadra stampare a video i goal fatti e i goal
subiti o dire che non è presente nell'elenco
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define DIM 10
#define LUNG 10

typedef struct
{
    char nome_squadra[LUNG];
    int goal_fatti;
    int goal_subiti;
} Squadra;

typedef struct
{
    char nome_campionato[LUNG];
    Squadra squadre[DIM];
} Campionato;

int leggiNum()
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x < 0);

    return x;
}

void caricaCampionato(Campionato c[], int dim)
{
    int j = 0;

    printf("Nome campionato: ");
    fflush(stdin);
    scanf("%s", c[j].nome_campionato);

    for (int i = 0; i < dim; i++)
    {
        printf("SQUADRA %d:\n", i + 1);

        printf("nome: ");
        fflush(stdin);
        scanf("%s", c[j].squadre[i].nome_squadra);

        printf("goal fatti: ");
        scanf("%d", &c[j].squadre[i].goal_fatti);

        printf("goal subiti: ");
        scanf("%d", &c[j].squadre[i].goal_subiti);
    }
}

void stampaCampionato(Campionato c[], int dim)
{
    int j = 0;
    printf("%s\n", c[j].nome_campionato);

    for (int i = 0; i < dim; i++)
    {
        printf("%s\n", c[i].squadre[j].nome_squadra);
        printf("goal fatti = %d\n", c[j].squadre[i].goal_fatti);
        printf("goal subiti = %d\n\n", c[j].squadre[i].goal_subiti);
    }
}

void stampaSquadra(char str[])
{
    printf("%s", str);
}

void numeroGoal(Campionato c[], int dim)
{
    int j = 0;

    for (int i = 0; i < dim; i++)
    {
        if (c[j].squadre[i].goal_fatti > c[j].squadre[i].goal_subiti)
        {
            stampaSquadra(c[i].squadre[i].nome_squadra);
        }
    }
}

void leggiStringa(char str[])
{
    scanf("%s\n", str);
}

int trovaSquadra(Campionato c[], char squadra[], int dim)
{
    int i = 0;
    int j = 0;

    bool trova = true;

    while (i < dim && trova != false)
    {
        if (strcmp(c[j].squadre[i].nome_squadra, squadra) != 0)
        {
            trova = false;
        }

        i++;
    }

    return i;
}

void stampaGoal(Campionato c[], int pos)
{
    int j = 0;

    printf("goal fatti = %d\n", c[j].squadre[pos].goal_fatti);
    printf("goal subiti = %d\n", c[j].squadre[pos].goal_subiti);
}

int main(int argc, char const *argv[])
{
    Campionato c[DIM];
    int ns;
    char squadra[LUNG];
    int pos;
    int j = 0;

    printf("numero squadre: ");
    ns = leggiNum();
    caricaCampionato(c, ns);
    stampaCampionato(c, ns);
    numeroGoal(c, ns);

    printf("squadra da trovare: ");
    leggiStringa(squadra);

    pos = trovaSquadra(c, squadra, ns);

    stampaGoal(c, pos);
    return 0;
}
