#include <stdio.h>
int main() {

    int m[5][5] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int i, j, soma;

    soma = 0;

    /*
//  Aliemnta Martriz i -> linha j -> coluna
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Informe numero [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            prod = prod * m[i][j];
        }
    }
*/

    for (i = 0; i < 4; i++) {
        for (j = 3; j >= 3 - i; j--) {
                soma = soma + m[i][j];
                printf("\n\n[%d] [%d]", i, j);
        }   
    }

    printf("Resultado: %d", soma);

    return 0;
}