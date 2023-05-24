#include <stdio.h>
#include <string.h>

struct Estoque{
    char codigo_prod[10];
    int quant_prod;
};

int main() {
    int i;

    struct Estoque produto[5];

    strcpy(produto[0].codigo_prod, "p10");
    produto[0].quant_prod = 10;

    strcpy(produto[1].codigo_prod, "p11");
    produto[1].quant_prod = 5;

    strcpy(produto[2].codigo_prod, "p12");
    produto[2].quant_prod = 3;

    strcpy(produto[3].codigo_prod, "p13");
    produto[3].quant_prod = 8;

    strcpy(produto[4].codigo_prod, "p14");
    produto[4].quant_prod = 12;

    int quant_ped;
    char codi_ped[10];

    printf("\nDigite o codigo do produto: ");
    scanf("%s", codi_ped);

    printf("\nDigite a quantidade desejada: ");
    scanf("%d", &quant_ped);

    for (i = 0; i < 5; i++) {
        if (strcmp(produto[i].codigo_prod, codi_ped) == 0) {
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