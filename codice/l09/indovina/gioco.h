#include "parolaSegreta.h"

typedef struct {
    ParolaSegreta parolaSegreta;
    int n_vite;
} Gioco;

void inizializza_gioco(Gioco *pg, int v);
void aggiorna_gioco(Gioco *pg, char c);
int finito(Gioco *pg);
int vincente(Gioco *pg);
void stampa_gioco(Gioco *pg);