// Interfaccia ADT lista

#define DIMENSIONE 50

typedef struct {
  int n_elementi;
  int dati[DIMENSIONE];
} Lista;

void nuova(Lista *pl);
int piena(Lista *pl);
void ins_ord(Lista *pl, int n);
void stampa(Lista l);