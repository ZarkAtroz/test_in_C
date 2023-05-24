#include "stdio.h"
int main(void) {

    int vetor[10]; //= { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, par, impar;

/*
    //Preenchimento do Vetor
    for (i = 0; i < 10; i++) {
        printf("Informe elemento %d: \n", i);
        scanf("%d", vetor[i]);
    }
*/
    //Identifica se é par ou impar e atrabui valor
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            vetor[i] = 7;
        } else {
            vetor[i] = -2;
        }
        
        printf("Elemento %d: %d\n", i, vetor[i]);
    }
    return 0;
}
