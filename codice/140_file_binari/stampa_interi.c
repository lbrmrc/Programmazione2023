#include <stdio.h>
#include <stdlib.h>

#define DIM 100

// formato del record: int

int main()
{
    FILE *pf;
    int a[DIM];
    int dl;
    int i;
    pf = fopen("numeri.dat", "rb");
    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }
    dl = fread(a, sizeof(int), DIM, pf);
    fclose(pf);
    for (i = 0; i < dl; i++)
        printf("%d\n", a[i]);
    return 0;
}