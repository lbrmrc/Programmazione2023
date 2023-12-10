#include <stdlib.h>
#include <stdio.h>

int main(){
    int dim, i;
    int *a;
    printf("Dimensione array?\n");
    scanf("%d", &dim);
    a = (int*)malloc(dim*sizeof(int));
    for (i = 0; i < dim; i++)
        a[i] = i; // oppure *(a+i) = i;
    free(a);
    return 0;
}