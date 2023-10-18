#include <stdio.h>

main() {
  int dividendo, divisore;
  int a, q;
  printf("Inserisci dividendo e divisore\n");
  scanf("%d%d", &dividendo, &divisore);

  a = dividendo;
  q = 0;
  while (a >= divisore) {
    // Sa = [dividendo, dividendo - divisore, dividendo -2*divisore,.... valore < divisore]
    a = a - divisore;
    // Sq = [0,1,2,....., lunghezza di Sa - 1]
    q = q + 1;
  }

  printf("Quoziente: %d\n", q);
  printf("Resto: %d\n", a);
}