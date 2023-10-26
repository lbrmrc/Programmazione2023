#include <stdio.h>

main() {
  char c;

  do {
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')         // se c è una lettera minuscola
      printf("%c", c - ('a' - 'A'));  // la corrispondente lettera maiuscola
    else
      printf("%c", c);  // il c letto da tastiera
  } while (c != '\n');
}