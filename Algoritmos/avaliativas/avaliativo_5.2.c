#include <stdio.h>
#include <stdbool.h>

int main() {

    bool iguais = true;
    int somaV[8] = {0,0,0,0,0,0,0,0};
    int matriz[3][3] = {{2,9,4},{7,5,3},{6,1,8}};
    
    int i, j;

//LINHAS - COLUNA DIAGONAIS
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            somaV[i] += matriz[i][j];
            somaV[i + 3] += matriz[j][i];

            if (i == j) {
                somaV[6] += matriz[i][j];
                somaV[7] += matriz[i][2 - i];
            }
        }
    }

    //Verifica se as somas sao iguais
    for (i = 1; i < 8; i++) {
        if (somaV[i] != somaV[0]) {
            iguais = false;
            break;
        }        
    }
    
    if(iguais == true) {
        printf("E um quadrado magico!");
    } else {
        printf("Nao e um quadrado magico!");
    }
        
 return 0;
}