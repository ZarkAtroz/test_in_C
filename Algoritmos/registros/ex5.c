#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Banco {
    int num_conta;
    char nome_conta[51];
    float sal_conta;
};

int main() {
    unsigned int criar_conta;
    unsigned int quant_conts;
    unsigned int dados, i;
    float saldo, depos, saque;
    unsigned int num_cont_dep;
    unsigned int num_cont_saq;

    criar_conta = 0;

    printf("\nGostaria de Criar uma conta?\n\n[1] Criar conta\n\n[2] Ja possuo conta");
    printf("\n\nOpcao: ");
    scanf("%d", &criar_conta);

    if (criar_conta == 1) {
        quant_conts = 4;
    } else if (criar_conta == 2) {
        quant_conts = 3;
    }

    struct Banco conta[quant_conts];
        conta[0].num_conta = 001;
        strcpy(conta[0].nome_conta, "Walter White");
        conta[0].sal_conta = 100;

        conta[1].num_conta = 002;
        strcpy(conta[1].nome_conta, "Gustavo Fring");
        conta[1].sal_conta = 9999;

        conta[2].num_conta = 003;
        strcpy(conta[2].nome_conta, "Saul Goodman");
        conta[2].sal_conta = 5555;

    if (criar_conta == 1) {
        printf("\nCadastro Novo Cliente\n");
        printf("\nInforme o Numero da conta: ");
        scanf("%d", &conta[3].num_conta);
        printf("\nInforme nome completo do titular:");
        scanf(" %50[^\n]", conta[3].nome_conta);
        conta[3].sal_conta = 0;
    }

    do {
        system("cls"); // Limpa o output do console

        printf("\n\nSelecione uma das opções ou aperte 4 para finalizar\n\n");
        printf("[1] Listagem de clientes\n\n");
        printf("[2] Depósito\n\n");
        printf("[3] Saque\n\n");
        printf("[4] Fim\n\n");
        printf("Opção: ");
        scanf("%d", &dados);

        switch (dados) {
            case 1:
                system("cls"); // Limpa o output do console

                printf("\n");
                for (i = 0; i < quant_conts; i++) {
                    printf("[%s]\n\n", conta[i].nome_conta);
                }
                break;

            case 2:
                system("cls"); // Limpa o output do console

                printf("\n\nInforme o número da conta: ");
                scanf("%d", &num_cont_dep);
                printf("\n");

                for (i = 0; i < quant_conts; i++) {
                    if (conta[i].num_conta == num_cont_dep) {
                        printf("\nInforme o valor do depósito: ");
                        scanf("%f", &depos);

                        conta[i].sal_conta += depos;
                        printf("\nO saldo atual da conta de %s é %.2f", conta[i].nome_conta, conta[i].sal_conta);
                        break;
                    } else {
                        printf("\nNumero da conta inválido");
                        break;
                    }
                }
                break;

            case 3:
                system("cls"); // Limpa o output do console

                printf("\n\nInforme o número da conta: ");
                scanf("%d", &num_cont_saq);
                printf("\n");

                for (i = 0; i < quant_conts; i++) {
                    if (conta[i].num_conta == num_cont_saq) {
                        printf("\nInforme o valor do saque: ");
                        scanf("%f", &saque);

                    if (saque > 0 && conta[i].sal_conta >= saque) {
                        conta[i].sal_conta = conta[i].sal_conta - saque;
                        printf("\nO saldo atual da conta de %s e %.2f", conta[i].nome_conta, conta[i].sal_conta);
            
                    } else if (saque <= 0) {
                        printf("\nValor inválido\n\nO valor do saque deve ser positivo");
                
                        } else {
                            printf("\nSaldo insuficiente");
                        }
            
                        break;
                    }
                }

                if (i == quant_conts) {
                    printf("\nNúmero da conta inválido");
                }

                break;

            case 4: 
                printf("\n\nOperacao finalizada\n\n");
                break;
        
            default:
                printf("Operacao invalida");
                break;
        }

    } while (dados != 4);
    
    return 0;
}
