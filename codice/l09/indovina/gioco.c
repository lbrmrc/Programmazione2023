#include "gioco.h"


void inizializza_gioco(Gioco *pg, int v)
{
    pg->n_vite = v;
}

void aggiorna_gioco(Gioco *pg, char c)
{
    pg->n_vite--;
}

int finito(Gioco *pg)
{
    return pg->n_vite == 0;
}

int vincente(Gioco *pg)
{
    return finito(pg) && pg->n_vite > 0;
}