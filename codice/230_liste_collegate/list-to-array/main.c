#include <stdio.h>

#include "lista.h"

int main()
{
    Lista l;
    int *p;
    int i;
    listaNonOrdinata(&l, 3);
    stampa(l);

    p = listToArray(l);
    for (i = 0; i < lunghezza(l); i++)
        printf("%d\n", p[i]);

    return 0;
}