#include <stdio.h>

int main() {

    int num, calc, fib = 1, aux = 0;
    
    printf("Sequência de números: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        calc = fib + aux;
        
        printf("%d ", calc);
        
        fib = aux;
        aux = calc;
    }

 return 0;
}