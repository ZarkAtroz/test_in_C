#include <stdio.h>

int main() {

    int contador;

    do {
        printf("%d ", contador);/*Testa no no inicio*/
        contador = contador++;
    } while (contador <= 5);

    return 0;
}