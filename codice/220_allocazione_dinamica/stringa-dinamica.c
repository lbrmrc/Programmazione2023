#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *alloca_stringa(int n){
    char *indirizzo= (char*)malloc(n*sizeof(char));
    return indirizzo;
}


// ERRATO
// char *alloca_stringa_locale(){
//     char s[80];
//     return s;
// }

int main(){
    char *s;
    s = alloca_stringa(80);
    scanf("%s", s);
    printf("%d\n", strlen(s));
    free(s);
    return 0;
}