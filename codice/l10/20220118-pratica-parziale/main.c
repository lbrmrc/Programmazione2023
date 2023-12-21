#include <stdlib.h>
#include <stdio.h>

#include "listaParole.h"

int main(int argc, char *argv[]){
    FILE *pf;
    char parola[LUNGHEZZA];
    Lista l;

    if (argc != 2)
        {
            printf("Uso: %s file_testo\n", argv[0]);
            exit(1);
        }
    
    nuovaLista(&l);
    
    pf = fopen(argv[1], "rt");
    if (pf == NULL){
        printf("Errore apertura file %s\n", argv[1]);
        exit(2);
    }

    while (fscanf(pf, "%s", parola) == 1){
        aggiornaLista(&l, parola);
    }

    stampa(l);

    fclose(pf);
    return 0;
 }