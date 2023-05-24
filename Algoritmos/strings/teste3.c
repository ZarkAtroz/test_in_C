#include <stdio.h>
#include <string.h>

int main() {

    char nome[21];
    int i, quant = 0;

    printf("Informe seu nome: ");
    scanf(" %20[^\n]", nome);

    printf("Quantidade %d", strlen(nome));
    

    return 0;
}