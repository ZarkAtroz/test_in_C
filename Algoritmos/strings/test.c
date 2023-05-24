#include <stdio.h>

int main() {

    char nome[21];

    printf("Informe seu nome: ");
    scanf(" %20[^\n]", nome);

    printf("Bom dia, %s!", nome);

    return 0;
}