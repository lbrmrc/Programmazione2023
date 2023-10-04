#include <stdio.h>

main(){
    int l;
    int area;
    int perimetro;

    printf("Digita il lato del quadrato\n");
    scanf("%d", &l);
    area =   l*l;
    perimetro = l*4;

    printf("Area: %d, Perimetro: %d\n", area, perimetro);
}