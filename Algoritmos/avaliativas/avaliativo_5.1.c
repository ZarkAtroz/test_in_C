#include <stdio.h>
#include <stdbool.h>

int main() {

    bool iguais = true;
    int somaV[8] = {0,0,0,0,0,0,0,0};
    int matriz[3][3] = {{8,1,6},{3,5,7},{4,9,2}};

    int somal0 = 0;
    int somal1 = 0;
    int somal2 = 0;
    int somac0 = 0;
    int somac1 = 0;
    int somac2 = 0;
    int somadp = 0;
    int somads = 0;
    int i, j;

//LINHAS
    //linha 0 
    for (j = 0; j < 3; j++) {
        somal0 += matriz[0][j];
    }
        somaV[0] = somal0;
        //printf("%d\n", somaV[0]);
    
    //linha 1
    for (j = 0; j < 3; j++) {
        somal1 += matriz[1][j];
    }
        somaV[1] = somal1;
        //printf("%d\n", somaV[1]);

    //linha 2
    for (j = 0; j < 3; j++) {
        somal2 += matriz[2][j];
    }
        somaV[2] = somal2;
        //printf("%d\n", somaV[2]);


//COLUNAS
    //coluna 0 
    for (i = 0; i < 3; i++) {
        somac0 += matriz[i][0];
    }
        somaV[3] = somac0;
        //printf("%d\n", somaV[3]);
    //coluna 1
    for (i = 0; i < 3; i++) {
        somac1 += matriz[i][1];
    }
        somaV[4] = somac1;
        //printf("%d\n", somaV[4]);
    //coluna 2
    for (i = 0; i < 3; i++) {
        somac2 += matriz[i][2];
    }
        somaV[5] = somac2;
        //printf("%d\n", somaV[5]);

//DIAGONAIS
    //principal
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            if (i == j) {
                somadp += matriz[i][j];
                
            }   
        }   
    }
        somaV[6] = somadp;
        //printf("%d\n", somaV[6]);

    //secundaria
    for (i = 0; i < 3; i++) {
        for (j = 3; j >= 0; j--) {

            if (i == j) {
                somads += matriz[i][j];
                
            }   
        }   
    }
        somaV[7] = somads;
        //printf("%d\n", somaV[7]);


//Verifica se as somas sao iguais
    for (i = 0; i < 8; i++) {
        if (somaV[i] != somaV[0]) {
            iguais == false;
            break;
        }
        
    }
    
    if(iguais == true) {
        printf("Correto");
    }
    

 return 0;
}