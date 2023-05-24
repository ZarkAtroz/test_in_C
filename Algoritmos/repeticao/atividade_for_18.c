#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1 - Inserir\n");
        printf("2 - Excluir\n");
        printf("3 - Consultar\n");
        printf("4 - Listar\n");
        printf("5 - Encerrar\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Opção escolhida: Inserir\n");
                break;
            case 2:
                printf("Opção escolhida: Excluir\n");
                break;
            case 3:
                printf("Opção escolhida: Consultar\n");
                break;
            case 4:
                printf("Opção escolhida: Listar\n");
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (opcao != 5);

    return 0;
}
