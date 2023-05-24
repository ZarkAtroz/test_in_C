#include "stdio.h"
int main(void) {

    int vetor[5], i;

    for (i = 0; i < 5; i++) {
        printf("Informe elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < 5; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
    
    printf("Vetor atualizado: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    return 0;
}