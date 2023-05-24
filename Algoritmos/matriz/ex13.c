#include <stdio.h>
int main() {

    int m[4][5] = {{5,4,2,8,7}, {3,6,9,1,4}, {0,3,5,2,9}, {4,9,7,6,2}};
    int v[4], i, j, menor;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            
            
        }   
    }

    for (i = 0; i < 4; i++) {
        menor = m[i][0];
        for (j = 1; j < 5; j++) {
            if (m[i][j] < menor) {
                menor = m[i][j];
            }
        }
        v[i] = menor;
        printf("%d ", v[i]);
    }

    return 0;
}