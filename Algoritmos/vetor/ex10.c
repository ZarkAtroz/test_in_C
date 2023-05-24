#include "stdio.h"
#include "stdbool.h"
int main(void) {

    int vetor[5] = { 5, 2, 7, 9, 3}, i, valor;
    bool encontrado;

    encontrado = false;

    printf("Informe uma valor qualquer: ");
    scanf("%d", &valor);

    for (i = 0; i < 5; i++) {

        if (vetor[i] == valor) {
            printf("Elemento %d: %d\n", i, valor);
            encontrado = true;
            break;
        } 
    }

    if (encontrado == false) {
        printf("Nao encontrado\n");
    }
    
    
    return 0;
}