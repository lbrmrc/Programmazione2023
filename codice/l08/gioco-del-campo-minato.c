#include <stdio.h>
#include <stdlib.h>

#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA 0.2

typedef struct {
  int mina_presente;
  int coperta;
} Casella;

typedef Casella Campo[NRIGHE][NCOLONNE];

typedef struct {
  int riga;
  int colonna;
} Mossa;

typedef struct {
  Campo campo_minato;
} Stato;

void applica(Stato* pstato, Mossa mossa) {}

double rnd_dbl(double a, double b) {
  return a + (double)rand() / RAND_MAX * (b - a);
}

void inizializza(Stato* ps) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++) {
      ps->campo_minato[i][j].coperta = 1;
      ps->campo_minato[i][j].mina_presente = (rnd_dbl(0.0, 1.0) <= PROBMINA);
    }
}

int mineAdiacenti(Campo c, int i, int j) {
  int nmine = 0;
  int riga, colonna;
  for (riga = i - 1; riga <= i + 1; riga++)
    for (colonna = j - 1; colonna <= j + 1; colonna++)
      if (riga >= 0 && riga < NRIGHE && colonna >= 0 && colonna < NCOLONNE &&
          c[riga][colonna].mina_presente)
        nmine++;
  return nmine;
}

void presenta_stato(Stato* ps) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    for (j = 0; j < NCOLONNE; j++)
      if (ps->campo_minato[i][j].coperta)
        printf("#");
      else if (ps->campo_minato[i][j].mina_presente)
        printf("*");
      else {
        int nmine = mineAdiacenti(ps->campo_minato, i, j);
        if (nmine > 0)
          printf("%d", nmine);
        else
          printf(" ");
      }
    printf("\n");
  }
}

int main() {
  Stato s;
  Mossa m;
  inizializza(&s);
    while (1) {
      presenta_stato(&s);
      leggi_mossa(&m);
      applica(&s, m);
    }
  presenta_stato(&s);
  return 0;
}