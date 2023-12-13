#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alloca(int dimensione) {
  char *pc;
  pc = (char *)malloc(dimensione);
  return pc;
}

int main() {
  char *s;
  // alloca 100 byte con indirizzo s;
  s = alloca(100); // somiglia a char s[100];
  strcpy(s, "ferrara");
  printf("%s\n", s);
  free(s);
  return 0;
}