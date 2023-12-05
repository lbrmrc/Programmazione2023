#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fp = fopen("numeri.dat", "wb");
    if (fp == NULL)
        exit(1); /* Errore di apertura */
    fwrite(vet, sizeof(int), 10, fp);
    fclose(fp);
}