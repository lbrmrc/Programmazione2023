#include "contatore.h"

long valore(Contatore c) {
  return c.numero;
}

void reset(Contatore *pc){
    pc->numero = 0;
}

void incrementa(Contatore *pc){
    pc->numero++;
}