#include <stdio.h>

int main() {
  char c;
  char s[20];
  int i;

  scanf("%c", &c);
  scanf("%s", s);

  while (s[i] != '\0') {
    if (c == s[i])
      break;
    i++;
  }

  if (s[i] == '\0')
    printf("%s non contiene %c\n", s, c);
  else
    printf("%s contiene %c\n", s, c);

  return 0;
}