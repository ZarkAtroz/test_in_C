#include <stdio.h>
#include <string.h>

struct Banco{
    int num_conta;
    char nome_conta[51];
    float sal_conta;
};


int main() {
    int criar_conta;
    int quant_conts;

    int dados, i;
    float saldo, depos, saque;

    int num_cont_dep;
    int num_cont_saq;

    struct Banco conta[quant_conts];

    criar_conta = 0;
    saldo = 0;

    conta[0].num_conta = 001;
    strcpy(conta[0].nome_conta, "Walter White");
    conta[0].sal_conta = 100;

    conta[1].num_conta = 002;
    strcpy(conta[1].nome_conta, "Gustavo Fring");
    conta[1].sal_conta = 9999;

    conta[2].num_conta = 003;
    strcpy(conta[2].nome_conta, "Saul Goodman");
    conta[2].sal_conta = 5555;

    

    printf("\nGostaria de Criar uma conta?\n\n[1] Criar conta\n\n[2] Ja possuo conta");

    printf("\n\nOpcao: ");
    scanf("%d", &criar_conta);
    
    if (criar_conta == 1) {
        
        printf("Cadastro Novo Cliente\n");

        printf("\nInforme o Numero da conta: ");
        scanf("%d", &conta[3].num_conta);

        printf("\nInforme nome completo do titular:");
        scanf(" %50[^\n]", conta[3].nome_conta);

        conta[3].sal_conta = 0;

        printf("\n\n");
        
        
        
    }

    do {
        printf("\n\nSelecione umas das opcoes ou aperte 4 para finalizar\n\n");

        printf("[1] Listagem de clientes\n\n");
        printf("[2] Deposito\n\n");
        printf("[3] Saque\n\n");
        printf("[4] Fim\n\n");

        printf("Opcao: ");

        scanf("%d", &dados);

        switch (dados) {
        case 1: 

        printf("\n");
        
        for (i = 0; i < 4; i++) {
            printf("[%s]\n\n", conta[i].nome_conta);
            
        }
            break;

        case 2:

            printf("\n\nInforme o numero da conta: ");
            scanf("%d", &num_cont_dep);

            printf("\n");

            for (i = 0; i < 4; i++) {
                if (conta[i].num_conta == num_cont_dep) {
                    printf("\nInforme o valor do deposito: ");
                    scanf("%f", &depos);

                    conta[i].sal_conta = conta[i].sal_conta + depos;

                    printf("\nO saldo atual da conta de %s e %.2f", conta[i].nome_conta, conta[i].sal_conta);
                    break;

                } else {

                    printf("\nNumero da conta invalido");
                    break;
                }
                
            }

            break;

        case 3:

            printf("\n\nInforme o numero da conta: ");
            scanf("%d", &num_cont_saq);

            printf("\n");

            for (i = 0; i < 4; i++) {
                if (conta[i].num_conta == num_cont_saq) {
                    printf("\nInforme o valor do saque: ");
                    scanf("%f", &saque);

                        if (conta[i].sal_conta >= saque) {

                            conta[i].sal_conta = conta[i].sal_conta - saque;

                            printf("\nO saldo atual da conta de %s e %.2f", conta[i].nome_conta, conta[i].sal_conta);
                            break;
                        }
                    
                } else {

                    printf("\nNumero da conta invalido");
                    break;
                }
            }

            break;

        case 4: printf("\n\nOperacao finalizada\n\n");
            break;
        
        default:
            printf("Operacao invalida");
            break;
        }

    } while (dados != 4);
    
    return 0;
}