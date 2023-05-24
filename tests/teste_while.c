#include <stdio.h>

int main() {

    int contador;

    while (contador <= 5) { /*Testa no fim*/
        printf("%d ", contador);
        contador = contador++;
    }
    return 0;
}