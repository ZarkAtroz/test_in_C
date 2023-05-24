#include <stdio.h>

int main() {
    
    int num, quant, i;

    quant = 0;

    printf("Informe numero: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            quant++;
        }
        
    }

    printf("\nQuantidade de numeros pares: %d", quant);    

    return 0;
}