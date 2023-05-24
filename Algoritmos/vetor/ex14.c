#include "stdio.h"
int main(void) {

    int vetor[100], i;

    for (i = 0; i < 100; i++) {
        vetor[i] = (i + 1) * 10;

         printf("Elemento %d: %d\n", i+1, vetor[i]);
    }
    
    return 0;
}