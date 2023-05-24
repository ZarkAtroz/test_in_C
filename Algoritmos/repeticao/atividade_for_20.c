#include <stdio.h>

int main() {
    int senha;
    int quant = 0;
    
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        quant++;
        
        if(senha != 2009) {
            printf("ACESSO NEGADO\n");
        }
    } while(senha != 2009);
    
    printf("ACESSO PERMITIDO.\nVoce realizou %d tentativas.\n", quant);

    return 0;
} 
