#include <stdio.h>
int main() {
    int mA[2][3] = {{10,20,30},{40,50,60}};
    int mB[2][3] = {{1,2,3},{4,5,6}};
    //int axl[2][3];

    int i, j, axl;


    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            axl = mA[i][j];
            mA[i][j] = mB[i][j];
            mB[i][j] = axl;
        }   
    }

    printf("\n\nApos troca: Matriz A\n\n|");
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d |", mA[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nApos troca: Matriz B\n\n|");
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d |", mB[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
axl = A[i][j]
A[i][j] = B[i][j]
B[i][j] = axl
*/