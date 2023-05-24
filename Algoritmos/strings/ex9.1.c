#include <stdio.h>

int main() {
    char nome[25];
    int idade, ali, res;
    float peso;

    printf("\nInforme seu primeiro nome: ");
    scanf("%s", nome);

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    printf("\nInforme seu peso: ");
    scanf("%f", &peso);

    printf("\nEsta bem alimentado 1 ou 0: ");
    scanf("%d", &ali);

    printf("\nEsta resfriado 1 ou 0: ");
    scanf("%d", &res);

    if (idade >= 16 && idade <= 69 && peso >= 50 && ali == 1 && res == 0) {

        printf("%s voce esta apto.", nome);

    } else {

        printf("Nao esta apto");

    }

    return 0;
}