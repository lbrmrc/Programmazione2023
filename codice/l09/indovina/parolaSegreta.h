#define LUNGHEZZA 50

typedef struct {
    char lettera;
    int indovinata;
} LetteraSegreta;

typedef struct {
    LetteraSegreta lettere[LUNGHEZZA];
    int dimensione_logica;
} ParolaSegreta;