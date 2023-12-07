#include "parolaSegreta.h"

void inizializza_parola_segreta(ParolaSegreta *ps, char *s)
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        ps->lettere[i].lettera = s[i];
        ps->lettere[i].indovinata = 0;
        i++;
    }
    ps->dimensione_logica = i;
}