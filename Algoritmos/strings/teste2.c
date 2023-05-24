#include <stdio.h>

int main() {

    char nome[21];
    int i, quant = 0;

    printf("Informe seu nome: ");
    scanf(" %20[^\n]", nome);

    for (i = 0; nome[i] != '\0'; i++) {
        quant++;
    }
    
    printf("%d", quant);

    return 0;
}