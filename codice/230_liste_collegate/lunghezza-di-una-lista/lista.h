typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void listaNonOrdinata(Lista* pl, int n);
int lunghezza(Lista l);
int massimo(Lista l);