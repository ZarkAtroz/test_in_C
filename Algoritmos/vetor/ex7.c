#include "stdio.h"
int main(void) {

    int vetor_a[5], vetor_b[5], i, produto, total;


    //Preenchimento do Vetor a
    for (i = 0; i < 5; i++) {
        printf("Informe os elemento %d de A: ", i);
        scanf("%d", &vetor_a[i]);
    }

    printf("\n-----------------------------\n\n");

    //Preenchimento do Vetor b
    for (i = 0; i < 5; i++) {
        printf("Informe os elemento %d de B: ", i);
        scanf("%d", &vetor_b[i]);
    }

    printf("\n-----------------------------\n\n");

    //Calcula o produto escalar
    for (i = 0; i < 5; i++) {

        produto = vetor_a[i] * vetor_b[i];

        total += produto;
    }

    printf("\n\nO produto escalar: %d\n", total);
    
    return 0;
}