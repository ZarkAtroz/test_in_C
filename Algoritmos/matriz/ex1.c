#include <stdio.h>
int main() {

    int m[2][3] = {{1, 2, 3}, {4, 5 ,6}};

    int i, j, soma;

    soma = 0;

//  Aliemnta Martriz i -> linha j -> coluna
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe numero [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            soma = soma + m[i][j];
        }
    }

/*
    printf("\n\nElemento da matriz: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            soma = soma + m[i][j];
            printf("Informe numero [%d][%d]: %d\n", i, j, m[i][j]);
        }
    }
*/


    printf("\nResultado: %d", soma);
    
    

    return 0;
}
