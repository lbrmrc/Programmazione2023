typedef struct{
    int matricola;
    int punteggio;
    char tipo;
} Record;


typedef struct{
    int matricola;
    int voto_pratico;
    int voto_teorico;
} Dato;

typedef struct nodo {
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pf);
void aggiorna(Lista *pf, Record r);
void stampa(Lista l);
void ordina(Lista *pl);