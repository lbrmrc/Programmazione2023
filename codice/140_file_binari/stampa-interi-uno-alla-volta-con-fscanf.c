#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;

    int numero;
    pf = fopen("numeri.dat", "rt");
    if (pf == NULL)
    {
        printf("errore apertura file\n");
        exit(1);
    }

    // map(printf, pf)
    while (fscanf(pf, "%d", &numero) == 1)
        printf("%d\n", numero);

    fclose(pf);
    return 0;
}