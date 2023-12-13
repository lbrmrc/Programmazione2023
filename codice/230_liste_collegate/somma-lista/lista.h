typedef int Dato;

typedef struct nodo {
    Dato dato;
    struct nodo * next;
} Nodo;

typedef Nodo *Lista;

void listaNonOrdinata(Lista* pl, int n);
void stampa(Lista l);

int somma(Lista l);