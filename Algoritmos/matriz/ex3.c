#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int m[2][3] = {{1, 2, 3}, {4, 5 ,6}} ;
    int i, j, num;
    bool encontrado = false;

    printf("Informe numero: ");
    scanf("%d", &num);

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

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (m[i][j] == num) {
                printf("Numero encontrado em [%d][%d]", i, j);
                encontrado = true;
                break;
            }
            
        }
        
    }
    
    if (encontrado == false){
        printf("\nNao foi encontrado");
    }

    return 0;
}
