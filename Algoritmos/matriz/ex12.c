#include <stdio.h>
int main() {

    int m[5][5] = {{0,10,8,20}, {10,0,25,30}, {8,25,0,12}, {20,30,12,0}};
    int i, j, cid_i, cid_j, km;

    printf("Informe a primeira cidade: ");
    scanf("%d", &cid_i);

    printf("\nInforme a segunda cidade: ");
    scanf("%d", &cid_j);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            km = m[cid_i][cid_j];
        }   
    }

    printf("Entre a cidade [%d] e [%d]: %d", cid_i, cid_j,km);

    return 0;
}