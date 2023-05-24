#include <stdio.h>
int main() {

    int m[5][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25}};
    int i, soma;

    soma = 0;

    /*
//  Aliemnta Martriz i -> linha j -> coluna
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe numero [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            prod = prod * m[i][j];
        }
    }
*/

    for (i = 0; i < 5; i++) {
        soma = soma + m[i][2];
    }

    printf("Resultado: %d", soma);

    return 0;
}