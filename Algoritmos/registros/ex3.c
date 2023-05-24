#include <stdio.h>

struct Atleta{
    char nome_atleta[50];
    char esporte_atleta[50];
    int idade_atleta;
    float altura_atleta;
};

int main() {

    int i, contA, contV;
    int mais_velho;
    float mais_alto;

    struct Atleta atleta[5] = {{"jon", "fut", 15, 1.73}, {"fon", "fut", 15, 1.72}, {"zon", "fut", 19, 1.83}, {"gon", "fut", 75, 1.77}, {"ron", "fut", 28, 1.81}};

/*
    for (i = 0; i < 5; i++) {
        printf("Dados do atleta %d:", i + 1);

        printf("Nome do atleta: ");
        scanf("%s", atleta[i].nome_atleta);

        printf("Esporte do atleta: ");
        scanf("%s", atleta[i].esporte_atleta);
        
        printf("Idade do atleta:");
        scanf("%d", &atleta[i].idade_atleta);

        printf("Altura do atleta:");
        scanf("%f", &atleta[i].altura_atleta);

        printf("\n");
    }*/

    mais_alto = atleta[0].altura_atleta;

    mais_velho = atleta[0].idade_atleta;

    for (i = 0; i < 5; i++) {

        if (mais_alto <= atleta[i].altura_atleta) {
            mais_alto = atleta[i].altura_atleta;
            contA ++;
        }
        
        if (mais_velho <= atleta[i].idade_atleta) {
            mais_velho = atleta[i].idade_atleta;
            contV ++;
        }
        
        
    }

    printf("\nO atleta mais alto é %s", atleta[contA].nome_atleta);

    printf("\nO atleta mais velho é %s", atleta[contV].nome_atleta);
    
    

    return 0;
}

/*
mais_alto: alteta[0].altura;

mais_velho: atleta[0].idade;

nome atleta

esporte

idade

altura

/-------------------------/

mais alto e mais velho

*/