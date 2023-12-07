#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "gioco.h"

void parola_casuale(char *s)
{
    char parole[100000][50];
    int dl;
    int indice_casuale;

    srand(time(NULL));

    FILE *pf;
    pf = fopen("words.italian.txt", "rt");
    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }
    dl = 0;
    while (fscanf(pf, "%s", parole[dl]) == 1)
        dl++;

    // in dl c'è il numero di parole nel dizionario

    indice_casuale = rand() % dl; // compreso fra 0 e dl-1
    strcpy(s, parole[indice_casuale]);
}

void inizializza_gioco(Gioco *pg, int v)
{
    char parola[50];
    pg->n_vite = v;
    parola_casuale(parola);
    inizializza_parola_segreta(&pg->parolaSegreta, parola);
}

void aggiorna_gioco(Gioco *pg, char c)
{
    int i;
    int trovata = 0;
    for (i = 0; i < pg->parolaSegreta.dimensione_logica; i++)
    {
        if (c == pg->parolaSegreta.lettere[i].lettera)
        {
            pg->parolaSegreta.lettere[i].indovinata = 1;
            trovata = 1;
        }
    }

    if (!trovata)
        pg->n_vite--;
}

void stampa_gioco(Gioco *pg)
{
    int i;
    for (i = 0; i < pg->parolaSegreta.dimensione_logica; i++)
    {
        if (pg->parolaSegreta.lettere[i].indovinata)
            printf("%c", pg->parolaSegreta.lettere[i].lettera);
        else
            printf("_");
    }
    printf("\nvite: %d\n", pg->n_vite);
}

void stampa_parola_segreta(Gioco *pg)
{
    int i;
    for (i = 0; i < pg->parolaSegreta.dimensione_logica; i++)
        printf("%c", pg->parolaSegreta.lettere[i].lettera);
    printf("\n");
}

int vincente(Gioco *pg)
{
    int i;
    for (i = 0; i < pg->parolaSegreta.dimensione_logica; i++)
        if (!pg->parolaSegreta.lettere[i].indovinata)
            return 0;
    return 1;
}

int finito(Gioco *pg)
{
    return vincente(pg) || pg->n_vite == 0;
}