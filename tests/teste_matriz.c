#include <stdio.h>

int main(int argc, char const *argv[]) {
//        i  j  i -> linhas; j -> colunas;
//        |  |
    int m[2][3] = {{1, 2, 3}, {4, 5 ,6}};

    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe numero: ");
            scanf("%d", &m[i][j]);
        }
        
    }
    

    return 0;
}
