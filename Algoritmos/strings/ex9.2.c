#include <stdio.h>
#include <string.h>

int main() {
    char nome[25], ali[4], res[4];
    int idade;
    float peso;

    printf("\nInforme seu primeiro nome: ");
    scanf("%s", nome);

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    printf("\nInforme seu peso: ");
    scanf("%f", &peso);

    printf("\nEsta bem alimentado: ");
    scanf("%s", ali);

    printf("\nEsta resfriado: ");
    scanf("%s", res);

    int ret1 = strcmp(ali, "sim");
    int ret2 = strcmp(res, "nao");

    if (idade > 16 && idade < 69 && peso > 50 && ret1 == 0 && ret2 == 0) {


        printf("%s voce esta apto.", nome);

    } else {

        printf("Nao esta apto");

    }

    return 0;
}
