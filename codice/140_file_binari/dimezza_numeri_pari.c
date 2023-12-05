#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    int numero;
    pf = fopen("numeri.dat", "r+b");
    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }
    while (fread(&numero, sizeof(int), 1, pf) == 1)
    {
        if (numero % 2 == 0)
        {
            numero = numero / 2;
            fseek(pf, -sizeof(int), SEEK_CUR);
            fwrite(&numero, sizeof(int), 1, pf);
            fseek(pf, 0, SEEK_CUR);
        }
    }
    fclose(pf);
    return 0;
}