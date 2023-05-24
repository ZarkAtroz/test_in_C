#include <stdio.h>

struct Contas{
    int num;
    char nome[51];
    float saldo;
};

int main() {
    /* Estruturas 5. Escreva um programa que simule contas bancárias com as seguintes especificações:
        
        Ao iniciar o programa deverá ser criado uma estrutura para as contas bancárias contendo onúmero da conta, o nome do titular da conta e o saldo, definido inicialmente como 0.
        
        Devem ser cadastrados 3 clientes diretamente no programa.
        
        Crie um menu para o programa com as seguintes opções:
        1 lista clientes
        2 deposito
        3 saque
        4 fim
        
        Para cada depósito ou saque realizado, deverá ser mostrado o nome do titular e o saldo atualizado. Oprograma não deve permitir saques com valores superiores ao saldo atual do cliente.*/
        
        struct Contas conta[3] = {{1, "Maria Antonia", 0.00},{2, "Antonia Maria", 0.00},{3, "Antone Marcos", 0.00}};
        int op, num_conta, cont=0;
        float valor;
        
        do{
        printf("\n[1] Lista de clientes");
        printf("\n[2] Depósito");
        printf("\n[3] Saque");
        printf("\n[4] Fim");
        printf("\nOperação desejada: ");
        scanf("%d", &op);
        
        switch(op){
            case 1: 
            for(int i=0; i<3; i++){
                printf("\n%s", conta[i].nome);
            }
            break;
            
            case 2:
            printf("\nInforme número da conta: ");
            scanf("%d", &num_conta);
            
            for(int i=0; i<3; i++){
                if(conta[i].num == num_conta){
                    
                    printf("Valor do depósito: R$ ");
                    scanf("%f", &valor);
                    
                    conta[i].saldo += valor;
                    
                printf("\nCliente: %s", conta[i].nome);
                printf("\nSaldo anterior:\nR$ %.2f", conta[i].saldo - valor);
                printf("\nSaldo atual: \nR$ %.2f", conta[i].saldo);
                } else {
                    cont = 1;
                }
            }
            if(cont == 1){
                printf("Conta inexistente.");
            }
            cont = 0;
            break;
            
            case 3:
            printf("\nInforme número da conta: ");
            scanf("%d", &num_conta);
            
            for(int i=0; i<3; i++){
                if(conta[i].num == num_conta){
                    
                    printf("\nValor disponível: R$ %.2f", conta[i].saldo);
                    
                    printf("\nValor do saque: R$ ");
                    scanf("%f", &valor);
                    
                    if(valor <= conta[i].saldo){
                        conta[i].saldo -= valor;
                        
                    printf("\nCliente: %s", conta[i].nome);
                printf("\nSaldo anterior:\nR$ %.2f", conta[i].saldo + valor);
                printf("\nSaldo atual: \nR$ %.2f", conta[i].saldo);
                    
                    }else{
                        printf("\nValor indisponível");
                        
                    printf("\nCliente: %s", conta[i].nome);
                    printf("\nSaldo anterior:\nR$ %.2f", conta[i].saldo);
                    printf("\nSaldo atual: \nR$ %.2f", conta[i].saldo);
                    }
                }else {
                    cont = 1;
                }
            }
            if(cont == 1){
                printf("Conta inexistente.");
            }
            cont = 0;
            break;
            
            case 4:
            printf("\nOperação finalizada pelo cliente.");
        } 
        }while(op != 4);
        
        printf("Kevin's programação agradece por utilizar nossos serviços!");
    
return 0;
}
