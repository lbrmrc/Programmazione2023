#define LUNGHEZZA 31

typedef struct {
  char parola[LUNGHEZZA];
  int contatore;
} Dato;

typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void aggiornaLista(Lista *pl, char *parola);
void stampa(Lista l);