#include <stdio.h>

void swap(int *pm, int *pn) {
  int t;
  t = *pm;
  *pm = *pn;
  *pn = t;
}

void ordina(int *p_a, int *p_b){
    if (*p_a > *p_b)
      // NO swap( a, b  );
      swap( p_a, p_b  );
      // NO swap( &p_a, &p_b);
      // NO swap( *p_a, *p_b);
}

int main() {
  int a, b;
  printf("Inserisci due interi\n");
  scanf("%d%d", &a, &b);
    ordina(&a,&b);
  printf("%d %d\n", a, b);  // stampa 3 2
}