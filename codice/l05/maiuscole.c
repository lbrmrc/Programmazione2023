#include <stdio.h>

char toUpperCase(char c) {
  if (c >= 'a' && c <= 'z')
    return c + 'A' - 'a';
  else
    return c;
}

int main(void) {
  char c;
  do {
    scanf("%c", &c);
    printf("%c", toUpperCase(c));
  } while (c != '\n');
  return 0;
}