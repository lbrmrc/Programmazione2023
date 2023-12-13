#include <stdio.h>

#include "lista.h"

int main(){
    Lista l;
    listaNonOrdinata(&l, 3);
    stampa(l);
    printf("%d\n",somma(l));
    return 0;
}