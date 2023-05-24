#include <stdio.h>
int main() {

    /*Ler um matriz 4 x 4 e dividir cada elemento de cada 
    linha pelo menor elemento encontrado na linha.
    Mostrar a matiz modificada*/

    float m[4][4] = {{1,2,3,4} ,{5,6,7,8} ,{9,10,11,12} ,{13,14,15,16}}, menor;

    int i, j;

    menor = 20;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            
            if (menor > m[0][j]) {
                menor = m[0][j];
            }

            if (menor > m[1][j]) {
                menor = m[1][j];
            }

            if (menor > m[2][j]) {
                menor = m[2][j];
            }

            if (menor > m[3][j]) {
                menor = m[3][j];
            }

            printf("\n%.2f", menor);
        }
        
    }
    

    /*for (j = 0; j < 4; j++) {
        if (menor > m[1][j]) {
            menor = m[1][j];
        }

        printf("\n%.2f", menor);
    }

    printf("Linha 1: ");

    for (j = 0; j < 4; j++) {
        if (menor > m[0][j]) {
            menor = m[0][j];
        }

        m[0][j] = m[0][j] / menor;

        printf(" %.2f", m[0][j]);

        
    }

    printf("\nLinha 2: ");

    menor = 20;

    for (j = 0; j < 4; j++) {
        if (menor > m[1][j]) {
            menor = m[1][j];
        }

        m[1][j] = m[1][j] / menor;

        printf(" %.2f", m[1][j]);
    }*/
    
    return 0;
}