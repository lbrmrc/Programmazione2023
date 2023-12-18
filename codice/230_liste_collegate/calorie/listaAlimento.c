#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaAlimento.h"

void insTesta(Lista *pl, Alimento d) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void caricaCalorie(char nomeFileBinario[], Lista *pl) {
  int numero;
  FILE *fb;
  Alimento record;
  fb = fopen(nomeFileBinario, "rb");
  if (fb == NULL) {
    printf("Impossibile aprire %s\n", nomeFileBinario);
    exit(3);
    if (fb == NULL) {
      printf("Impossibile aprire %s\n", nomeFileBinario);
      exit(3);
    }
  }
  *pl = NULL;
  while (fread(&record, sizeof(Alimento), 1, fb) == 1)
    insTesta(pl, record);

  fclose(fb);
}

float calorieAlimento(char nomeAlimento[], Lista l) {
  while (l != NULL) {
    if (strcmp(l->dato.nome, nomeAlimento) == 0) // alimento trovato
      return l->dato.calorie;
    l = l->next; // l = coda di l
  }
  printf("Alimento %s non trovato\n", nomeAlimento);
  exit(3);
}