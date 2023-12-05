#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;

    int numero;
    int somma=0;
    pf = fopen("numeri.dat", "rb");
    if (pf == NULL)
    {
        printf("errore apertura file\n");
        exit(1);
    }


    //reduce (+, 0, pf)
    somma = 0;
    while (fread(&numero, sizeof(int), 1, pf) == 1)
        somma = somma + numero;

    printf("%d\n", somma);
    fclose(pf);
    return 0;
}