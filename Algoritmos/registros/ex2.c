#include <stdio.h>

struct Tablet{
    char nome_loja[50];
    float preco_loja;
};


int main() {
    int i;
    float soma, media;

    struct Tablet loja[5];

    for (i = 0; i < 5; i++) {
        printf("Digite o nome da loja %d: ", i+1);
        scanf("%s", loja[i].nome_loja);

        printf("Digite o preco da joja %d: ", i+1);
        scanf("%f", &loja[i].preco_loja);

        printf("\n");
        
    }

    printf("\n Lojas com valores menores que a media:\n");
    for (i = 0; i < 5; i++) {
        soma += loja[i].preco_loja;
        media = soma / 2;

        if (loja[i].preco_loja < media) {
            printf("%s ", loja[i].nome_loja);
        }
                
    }
    
    

    return 0;
}/*
5 registros 

nome loja

preco tablet

/-----------------/

calcular media dos preco

relacao com nome da loja de tables com o preco inferior a media
*/