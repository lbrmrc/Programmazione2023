#include <stdio.h>
#include "gioco.h"

void inizializza_gioco(Gioco *pg, int v)
{
    pg->n_vite = v;
    inizializza_parola_segreta(&pg->parolaSegreta, "ferrara");
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

int finito(Gioco *pg)
{
    return pg->n_vite == 0;
}

int vincente(Gioco *pg)
{
    return finito(pg) && pg->n_vite > 0;
}