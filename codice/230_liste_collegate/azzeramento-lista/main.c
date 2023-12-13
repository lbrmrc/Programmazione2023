#include "lista.h"

int main(){
    Lista l;
    listaNonOrdinata(&l, 3);
    stampa(l);
    azzera(l);
    stampa(l);
    return 0;
}