/*
Si scriva un programma che definisca una struttura che permetta di contenere una
serie di dati Squadra (struct Squadra) del tipo:
● nome squadra (stringa di lunghezza 20) ;
● goal fatti (intero);
● goal subiti (intero).
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

typedef struct 
{
    char nome[DIM];
    int goal_fatti;
    int goal_subiti;
} Squadra;

int leggiNum()
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x < 0);
    
    return x;
}

void caricaSquadre(Squadra v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("SQUADRA %d:\n", i + 1);

        printf("nome = ");
        scanf("%s", v[i].nome);

        printf("goal fatti = ");
        scanf("%d", &v[i].goal_fatti);

        printf("goal subiti = ");
        scanf("%d", &v[i].goal_subiti);
    }
}

void stampaSquadre(Squadra v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("\nSQUADRA %d:\n", i + 1);
        printf("%s\n", v[i].nome);
        printf("%d\n", v[i].goal_fatti);
        printf("%d\n", v[i].goal_subiti);
    }
}

int main(int argc, char const *argv[])
{
    Squadra squadre[DIM];
    int ns;

    printf("quante squadre: ");
    ns = leggiNum();

    caricaSquadre(squadre, ns);
    stampaSquadre(squadre, ns);
    return 0;
}
