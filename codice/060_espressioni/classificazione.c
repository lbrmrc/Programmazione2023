#include <stdio.h>

main() {
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("maiuscola\n");
    else if (c >= 'a' && c<= 'z')
        printf("minuscola\n");
    else if (c >= '0' && c <= '9')
        printf("cifra\n");
    else
        printf("altro\n");
}