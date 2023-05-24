#include <stdio.h>

int main() {

    char frases[] = "Escreva um programa que mostre o tamanho de uma dois tres";

    for (int i = 0; i < 50; i++) {
        if (frases[i] != ' ') {
            printf("%c", frases[i]);
        }

        //printf("%c", frases[i]);
        
    }

    return 0;
}