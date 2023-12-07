#include <stdio.h>

#include "gioco.h"

int main(int argc, char *argv[])
{
    char lettura[2];
    Gioco gioco;
    int n_vite;
    sscanf(argv[1], "%d", &n_vite);
    inizializza_gioco(&gioco, n_vite);

    while (!finito(&gioco))
    {
        scanf("%s", lettura);
        aggiorna_gioco(&gioco, lettura[0]);
        stampa_gioco(&gioco);
    }

    if (vincente(&gioco))
        printf("Hai vinto\n");
    else
    {
        printf("Hai perso\n");
        stampa_parola_segreta(&gioco);
    }

    return 0;
}