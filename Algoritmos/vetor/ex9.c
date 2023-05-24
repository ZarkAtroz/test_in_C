#include "stdio.h"
int main(void) {

    int vetor[5], i;


    //Preenchimento do Vetor
    for (i = 0; i < 5; i++) {
        printf("Informe elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }


    //Identifica se é par ou impar e informa
    for (i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("Elemento %d: %d par\n", i, vetor[i]);
        } else {
            printf("Elemento %d: %d impar\n", i, vetor[i]);
        }
    }

        //printf("Elemento %d: %d\n", i, vetor[i]);
    return 0;
}