#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char Parola[51];

Parola parole[100000]; // variabile globale

int main(int argc, char *argv[])
{
    // ./parola_casuale words.italian.txt
    // argc -> 2
    // argv[0] -> "./parola_casuale"
    // argv[1] -> "words.italian.txt"
    int dl;
    int indice_casuale;

    srand(time(NULL));

    FILE *pf;
    if (argc != 2)
    {
        printf("Sintassi: %s nome_file_dizionario\n", argv[0]);
        exit(2);
    }
    pf = fopen(argv[1], "rt");
    if (pf == NULL)
    {
        printf("Errore apertura file %s\n", argv[1]);
        exit(1);
    }
    dl = 0;
    while (fscanf(pf, "%s", parole[dl]) == 1)
        dl++;

    // in dl c'è il numero di parole nel dizionario

    indice_casuale = rand() % dl; // compreso fra 0 e dl-1
    printf("%s\n", parole[indice_casuale]);
    return 0;
}