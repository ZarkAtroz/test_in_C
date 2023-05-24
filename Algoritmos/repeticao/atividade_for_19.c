#include <stdio.h>

int main() {
    int opcao, num, qtd_pares = 0, qtd_impares = 0;

    do {
        printf("\nEscolha uma opção:\n\n");
        printf("1 - Digitar número par\n");
        printf("2 - Digitar número ímpar\n");
        printf("3 - Encerrar e mostrar resultados\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                do {
                    printf("Digite um número par: ");
                    scanf("%d", &num);
                } while (num % 2 != 0);
                qtd_pares++;
                break;
            case 2:
                do {
                    printf("Digite um número ímpar: ");
                    scanf("%d", &num);
                } while (num % 2 == 0);
                qtd_impares++;
                break;
            case 3:
                printf("Quantidade de números pares digitados: %d\n", qtd_pares);
                printf("Quantidade de números ímpares digitados: %d\n", qtd_impares);
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}
