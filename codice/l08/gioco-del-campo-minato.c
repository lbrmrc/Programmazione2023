#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void applica(Stato* pstato, Mossa mossa) {
  pstato->campo_minato[mossa.riga][mossa.colonna].coperta = 0;
}

int sconfitta(Stato* ps) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (ps->campo_minato[i][j].mina_presente &&
          !ps->campo_minato[i][j].coperta)
        return 1;
  return 0;
}

int vittoria(Stato* ps) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (!ps->campo_minato[i][j].mina_presente &&
          ps->campo_minato[i][j].coperta)
        return 0;
  return !sconfitta(ps);
}

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

void leggi_mossa(Mossa* pm) {
  char stringa[3];
  // "b4"
  do {
    printf("Mossa?\n");
    scanf("%s", stringa);
  } while (strlen(stringa) != 2 || stringa[0] < 'a' ||
           stringa[0] > 'a' + NRIGHE - 1 || stringa[1] < '0' ||
           stringa[1] > '0' + NCOLONNE - 1);
  pm->riga = stringa[0] - 'a';
  pm->colonna = stringa[1] - '1';
}

void presenta_stato(Stato* ps) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    printf("%c ", 'a' + i);
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

  printf("  ");
  for (j = 1; j <= NCOLONNE; j++)
    printf("%d", j);
  printf("\n");
}

int main() {
  Stato s;
  Mossa m;
  inizializza(&s);
  while (!vittoria(&s) && !sconfitta(&s)) {
    presenta_stato(&s);
    leggi_mossa(&m);
    applica(&s, m);
  }
  if (vittoria(&s))
    printf("Hai vinto\n");
  else
    printf("Hai perso\n");
  presenta_stato(&s);
  return 0;
}