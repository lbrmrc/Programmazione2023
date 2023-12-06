typedef struct {
  long numero;
} Contatore;

long valore(Contatore c);
void reset(Contatore *pc);
void incrementa(Contatore *pc);