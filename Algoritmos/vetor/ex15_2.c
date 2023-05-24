#include <stdio.h>
int main() {
        
    int G[6] = {3, 7, 15, 25, 47, 49}; 
    int A[10] = {12, 19, 25, 28, 31, 34, 42, 47, 49, 51},i, j, acertos;
        
    acertos = 0;
        
    for(i = 0; i < 6; i++){

        for(j = 0; j < 10; j++){

            if(G[i] == A[j]){
                
                acertos++;
            }

        }
                
    }
    
    printf("Número de acertos: %d", acertos);
                

return 0;

}