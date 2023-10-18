#include <stdio.h>

main() {
  int i;
  for (i = 1; i <= 10; i++) {
    // i assume la sequenza s1 = [1,2,3,4,5,6,7,8,9,10]
    // s2 = [2,4,6,8,10,12,14,16,18,20]
    // s2 = map(*2, s1)
    printf("%d\n",
           i * 2);  // output della sequenza s2 = [2,4,6,8,10,12,14,16,18,20]
  }
}