#include <stdio.h>

int main() {
  char s1[10] = "Bari";
  char s2[10] = "bari";
  int i;

  int d;

  // impostazione di d
  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
    i++;
  }
  d = s1[i] - s2[i];

  if (d < 0)
    printf("%s precede %s\n", s1, s2);
  else if (d == 0)
    printf("%s e %s sono uguali\n", s1, s2);
  else
    printf("%s precede %s\n", s2, s1);
}