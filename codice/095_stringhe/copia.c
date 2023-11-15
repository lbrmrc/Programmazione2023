#include <stdio.h>

int main() {
  char s1[30] = "ABC";
  char s2[30] = "Ferrara";
  int i;

  // copia di s1 in s2
  for (i = 0; i < 30 && s1[i] != '\0'; i++) {
    s2[i] = s1[i];
  }
  s2[i] = '\0';

  printf("%s\n", s2);
}