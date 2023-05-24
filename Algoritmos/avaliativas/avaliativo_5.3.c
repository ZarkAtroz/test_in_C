#include <stdio.h>
#include <stdbool.h>

int main() {

    bool iguais = true;
    int somaV[8] = {0,0,0,0,0,0,0,0};
    int matriz[3][3] = {{8,1,6},{3,5,7},{4,9,2}};
    
    int i, j;

//LINHAS - COLUNA
    for (i = 0; i < 3; i++) {
        somaV[0] += matriz[0][i];
        somaV[1] += matriz[1][i];
        somaV[2] += matriz[2][i];
        somaV[3] += matriz[i][0];
        somaV[4] += matriz[i][1];
        somaV[5] += matriz[i][2];
        somaV[6] += matriz[i][i];
        somaV[7] += matriz[i][2 - i];
    }

    //Verifica se as somas sao iguais
    for (i = 0; i < 8; i++) {
        if (somaV[i] != somaV[0]) {
            iguais == false;
            break;
        }
        
    }
    
    if(iguais == true) {
        printf("E um quadrado magico");
    }
    

    
 return 0;
}