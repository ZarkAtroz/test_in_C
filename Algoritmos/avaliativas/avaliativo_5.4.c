#include <stdio.h>
#include <stdbool.h>

int main() {
    bool quadrado_magico = true;
    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;
    int matriz[3][3] = {{8,1,6},{3,5,7},{4,9,2}};

    // Verifica a soma das linhas, colunas e diagonais
    for (int i = 0; i < 3; i++) {
        int soma_linha = 0;
        int soma_coluna = 0;
        for (int j = 0; j < 3; j++) {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
            if (i == j) {
                soma_diagonal_principal += matriz[i][j];
            }
            if (i + j == 2) {
                soma_diagonal_secundaria += matriz[i][j];
            }
        }
        if (soma_linha != soma_coluna || soma_diagonal_principal != soma_diagonal_secundaria) {
            quadrado_magico = false;
            break;
        }
    }

    // Exibe o resultado
    if (quadrado_magico) {
        printf("A matriz é um quadrado mágico\n");
    } else {
        printf("A matriz não é um quadrado mágico\n");
    }

    return 0;
}
