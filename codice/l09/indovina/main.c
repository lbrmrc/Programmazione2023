#include <stdio.h>

#include "gioco.h"

int main()
{
    char lettura[2];
    Gioco gioco;
    inizializza_gioco(&gioco, 5);

    while (!finito(&gioco))
    {
        scanf("%s", lettura);
        aggiorna_gioco(&gioco, lettura[0]);
    }

    if (vincente(&gioco))
        printf("Hai vinto\n");
    else
        printf("Hai perso\n");

    return 0;
}