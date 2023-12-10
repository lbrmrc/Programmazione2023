// interfaccia dell'ADT Lista di interi con implementazione collegata

typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo *Lista;

void azzera(Lista l);
void stampa(Lista l);
void listaNonOrdinata(Lista* pl, int n);