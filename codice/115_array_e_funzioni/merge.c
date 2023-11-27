#include <stdio.h>

void stampa(int v[], int dl) {
  int i;
  for (i = 0; i < dl; i++)
    printf("%d ", v[i]);
  printf("\n");
}

void merge(int p[], int dlp, int q[], int dlq, int r[]) {
  int ip = 0, iq = 0, ir = 0;
  while (ir < dlp + dlq) {
    if (ip < dlp && iq < dlq && p[ip] <= q[iq]) {
      r[ir] = p[ip];
      ip++;
    } else {
      r[ir] = q[iq];
      iq++;
    }
    ir++;
  }
}

int main() {
  int a[] = {1, 3, 4, 4, 5};
  int b[] = {0, 1, 4, 6, 7};
  int c[10];
  merge(a, 5, b, 5, c);
  stampa(c, 10);
}