#include <stdio.h>

void f(){
    printf("Hello\n");
    f(); // chiamata ricorsiva
}

int main(){
    f();
}