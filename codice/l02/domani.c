#include <stdio.h>

main() {
  int g, m, a;
  int giorni_del_mese;  // il numero di giorni del mese m nell'anno a
  printf("Inserisci giorno, mese e anno di una data\n");
  scanf("%d%d%d", &g, &m, &a);
  if (g == 31 && m == 12)
    // ultimo giorno dell'anno
    printf("1/1/%d\n", a + 1);
  else {
    if (m == 2)
      if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
        giorni_del_mese = 29;
      else
        giorni_del_mese = 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
      giorni_del_mese = 30;
    else
      giorni_del_mese = 31;
    // adesso giorni del mese rappresenta quanti giorni ha il mese m nell'anno a
    if (g == giorni_del_mese)
      // ultimo giorno del mese
      printf("1/%d/%d\n", m + 1, a);
    else
      // giorno generico
      printf("%d/%d/%d\n", g + 1, m, a);
  }
}
