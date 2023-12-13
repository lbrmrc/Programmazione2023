typedef int Dato;

typedef struct nodo {
    Dato dato;
    struct nodo * next;
} Nodo;

typedef Nodo *Lista;

void listaNonOrdinata(Lista* pl, int n);
void azzera(Lista l);
void stampa(Lista l);