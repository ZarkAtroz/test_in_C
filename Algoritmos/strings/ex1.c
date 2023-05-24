#include <stdio.h>
#include <string.h>

int main() {

    char str[31];

    printf("Informe seu nome: ");
    scanf(" %30[^\n]", str);

    printf("Tamanho da string: %d", strlen(str));

    return 0;
}

// Gabriel Sampaio Giacomoni