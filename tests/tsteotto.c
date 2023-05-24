#include <stdio.h>

int input, alcool, gasolina_comum, gasolina_aditivada, diesel = 0, total;

int main () {
    do {
        printf("\n[1] Alcool\n[2] Gasolina comum\n[3] Gasolina aditivada\n[4] Diesel\n[5] Fim\n\n");
        scanf("%d", &input);

        switch (input) {
        case 1:
            alcool++;
            break;
        case 2:
            gasolina_comum++;
            break;
        case 3:
            gasolina_aditivada++;
            break;
        case 4:
            diesel++;
            break;
        case 5:
            break;
        default:
            printf("Opcao %d nao existe. Tente novamente.\n", input);
            break;
        }
    } while (input != 5);

    total = alcool + gasolina_aditivada + gasolina_comum + diesel;

    printf("\nMuito obrigado!\n\n");
    printf("Carros abastecidos: %d\n", total);

    if (total > 0) {
        printf("Alcool: %.2f%%\n", 100*(alcool*1.0)/total);
        printf("Gasolina comum: %.2f%%\n", 100*(gasolina_comum*1.0)/total);
        printf("Gasolina aditivada: %.2f%%\n", 100*(gasolina_aditivada*1.0)/total);
        printf("Diesel: %.2f%%\n", 100*(diesel*1.0)/total);
    }

    return 0;
}