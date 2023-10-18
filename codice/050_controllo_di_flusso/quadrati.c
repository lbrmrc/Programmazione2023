#include <stdio.h>

main(){
    int n; // variabile input
    int i; // assumerà i valori da 1 a n;
    int q; // sarà il quadrato di i;
    printf("Inserisci un numero intero\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        // i assume la sequenza di valori Si= [1,2, ..., n]
        q = i * i; // q assume la sequenza di valori Sq = [1, 4, 9,...., n*n] = map(quadrato, Si)
        printf("%d\n", q);
    }
}