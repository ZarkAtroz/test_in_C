#include <stdio.h>

struct Estoque{
    int codigo_prod;
    int quant_prod;
};

int main() {

    int i;

    struct Estoque produto[5];

    produto[0].codigo_prod = 1;
    produto[0].quant_prod = 100;

    produto[1].codigo_prod = 2;
    produto[1].quant_prod = 5;

    produto[2].codigo_prod = 3;
    produto[2].quant_prod = 3;

    produto[3].codigo_prod = 4;
    produto[3].quant_prod = 8;

    produto[4].codigo_prod = 5;
    produto[4].quant_prod = 12;

/*
    for (i = 0; i < 5; i++) {
        printf("\nDados do produto %d\n", i + 1);
        
        printf("\nCodigo do produto: ");
        scanf("%s", produto[i].codigo_prod);

        printf("\nQuantidade do produto: ");
        scanf("%d", produto[i].quant_prod);

        printf("\n\n");
    }
*/
    int quant_ped;
    int codi_ped;

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codi_ped);

    printf("\nDigite a quantidade desejada: ");
    scanf("%d", &quant_ped);

    for (i = 0; i < 5; i++) {
        if (produto[i].codigo_prod == codi_ped) {
            if (produto[i].quant_prod >= quant_ped) {
                produto[i].quant_prod -= quant_ped;
                printf("\n\nEstoque atualizado");
                printf("\n\nAinda ha %d produtos no estoque", produto[i].quant_prod);
            } else {
                printf("\n\nQuantidade insuficiente em estoque");
            }
            break;
        }
    }

    if (i == 5) {
        printf("\n\nProduto nao encontrado");
    }
    
    
    return 0;
}/*

codigo do produto

quantidade do produto

/-----------------------/

pedido 

codigo do produto e quantidade

    if {
    
        quantidade >= pedido -> quantidade atualizada => mensagem (Estoque atualizado)
    
    } else {

        quantidade < pedido -> mensagem (Quantidade insuficiente em estoque)

            }

*/