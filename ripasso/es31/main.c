/*
21. Gioco carte Mostri caratterizzati da un nome, forza [5..10], vita [0..100]. Gestire il
gioco con un menu:
● 0-esci
● 1- crea mostro
● 2- gioca (scegli mostro)
● 3- stampa mazzo
Si devono usare anche le seguenti funzioni:
● void setVita( Mostro *m, int vita); controlla correttezza vita
● void setForza( Mostro *m, int forza); controlla correttezza forza
● int getForza(Mostro m)
● int getVita(Mostro m)
● int getLancio(Mostro m) si lancia un dado con 6 facce e si moltiplica per la
forza del mostro


● Mostro creaMostro(char nome[], int vita, int forza)
● Mostro creaMostroCasuale(char nome[])


NON FUNZIONA
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LUNG 10
#define DIM 50
#define V_MIN 0
#define V_MAX 10
#define F_MIN 5
#define F_MAX 10

typedef struct main
{
    char nome[LUNG];
    int forza;
    int vita;
} Mostro;

void menu()
{
    printf("0- esci\n");
    printf("1- crea mostro\n");
    printf("2- gioca (scegli mostro)\n");
    printf("3- stampa mazzo\n");
}

int leggiNum(int p1, int p2)
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x < p1 && x > p2);

    return x;
}

void leggiStringa(char nome[])
{
    scanf("%s", nome);
}

void creaMostro(Mostro m, int pos)
{
    printf("nome: ");
    scanf("%s", m.nome);

    printf("vita: ");
    m.vita = leggiNum(V_MIN, V_MAX);

    printf("forza: ");
    m.forza = leggiNum(F_MIN, F_MAX);
}

void trovaMostro(Mostro m[], char nome[], int dim)
{
    int i = 0;
    bool t = false;

    while (t == false && i < dim)
    {
        if (strcmp(nome, m[i].nome) == 0)
        {
            printf("%s, ", m[i].nome);
            printf("%d, ", m[i].forza);
            printf("%d\n", m[i].vita);
            t = true;
        }

        i++;
    }
}

void stampaMazzo(Mostro m[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("MOSTRO %d:\n", i + 1);

        printf("%s, ", m[i].nome);
        printf("%d, ", m[i].forza);
        printf("%d\n", m[i].vita);
    }
    
}

int main(int argc, char const *argv[])
{
    Mostro m[DIM];
    int s = 4;
    int cont_m;
    char nome[LUNG];

    while (s != 0)
    {
        menu();

        printf("menu: ");
        s = leggiNum(0, 3);

        if (s == 1)
        {
            creaMostro(m[cont_m], cont_m);
            cont_m++;
        }
        else if (s == 2)
        {
            printf("cerco: ");
            leggiStringa(nome);

            trovaMostro(m, nome, cont_m);
        }
        else
        {
            stampaMazzo(m, cont_m);
        } 
    }

    return 0;
}
