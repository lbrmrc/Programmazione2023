#include <stdio.h>
#include <stdlib.h>

#include "listaEsami.h"


int main(int argc, char *argv[]){
    FILE *pf;
    Record r;
    Lista l;
    
    if (argc < 2){
        printf("Uso: %s file_prove\n", argv[0]);
        exit(1);
    }

    pf = fopen(argv[1], "rb");
    if (pf == NULL){
        printf("Errore apertura file %s\n", argv[1]);
        exit(2);
    }

    nuovaLista(&l);

    while( fread(&r, sizeof(Record), 1, pf) == 1){
        aggiorna(&l, r);
    }

    ordina(&l);

    stampa(l);
        
    return 0;
}