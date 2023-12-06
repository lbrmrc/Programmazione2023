#include <stdio.h>

#include "contatore.h"

int main(){
    Contatore c;
    reset(&c);
    incrementa(&c);
    printf("%d\n", valore(c));
}