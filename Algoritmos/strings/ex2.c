#include <stdio.h>

int main() {

    char str [31];

    int i, quant;

    printf("Informe seu nome: ");
    scanf(" %30[^\n]", str);

    for (i = 0; i < str[i]; i++) {
        quant++;
    }
    
    printf("%d", quant);

    return 0;
}