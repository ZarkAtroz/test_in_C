#include <stdio.h>

int main() {

    char str[31] = "arara azul";
    int i, frase, cont = 0;

/*
    printf("Informe seu nome: ");
    scanf(" %30[^\n]", str);
    */

    for (i = 0; i < 31; i++) {
        if (97 == str[i]) {//a
            cont ++;
        }
        
        if (101 == str[i]) {//e
            cont ++;
        }
        
        if (105 == str[i]) {//i
            cont ++;
        }
        
        if (111 == str[i]) {//o
            cont ++;
        }

        if (117 == str[i]) {//u
            cont ++;
        }
        
        
    }

    printf("%d", cont);

    return 0;
}