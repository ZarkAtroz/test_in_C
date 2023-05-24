#include <stdio.h>

int main() {

    char str[31] = "arara azul", x = 'a';
    int i, cont = 0;

/*
    printf("Informe seu nome: ");
    scanf(" %30[^\n]", str);

    printf("Informe uma letra: ");
    scanf("%c", x);
    */

    for (i = 0; i < 31; i++) {
        if (x == str[i]) {
            cont++;
        }
        
    }

    printf("%d", cont);
    

    return 0;
}