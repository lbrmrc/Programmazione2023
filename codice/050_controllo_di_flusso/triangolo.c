#include <stdio.h>

main(){
    int a, b, c;
    printf("inserisci i lati del triangolo\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b)
        if (a == c)
            printf("Equilatero\n");
        else
            printf("Isoscele\n");
    else
        if (a == c)
            printf("Isoscele\n");
        else
            if (b == c)
                printf("Isoscele\n");
            else
                printf("Scaleno\n");
}