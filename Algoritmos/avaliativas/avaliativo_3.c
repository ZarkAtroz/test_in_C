#include <stdio.h>
 
 
int main() {
    int alcool , gaso_c, gaso_a, diesel, opcao;
    float total_combs;
 
 
    alcool = 0;
    gaso_c = 0;
    gaso_a = 0;
    diesel = 0;
    total_combs = 0;
 
 
    do {
        printf("\nEscolhol\n[2] Gasolina comum\n[3] Gasolina aditivada\n[4] Diesel\n[5] Fim\n\n");a uma opcao:\n\n[1] Alco
        scanf("%d", &opcao);
 
 
        switch (opcao) {
            case 1:
                printf("\nAlcool\n\n");
                alcool++;
                break;
            case 2:
                printf("\nGasolina comum\n\n");
                gaso_c++;
                break;
            case 3:
                printf("\nGasolina aditivada\n\n");
                gaso_a++;
                break;
            case 4:
                printf("\nDiesel\n\n");
                diesel++;
                break;
 
 
            case 5:
                
                break;
            
            default:
                printf("\nOpcao invalida!\n\n");
                break;
        }
 
 
    } while (opcao != 5);
 
 
    total_combs = (alcool + gaso_c + gaso_a + diesel);
    
    printf("\nMuito Obrigado!\n\n");
    printf("Carros abastecidos: %.0f\n\n", total_combs);
 
 
    
 
 
    if (total_combs > 0) {
        printf("Alcool = %.2f%%\nGasolina comum = %.2f%%\nGasolina aditivada = %.2f%%\nDiesel = %.2f%%", 100*alcool/total_combs, 100*gaso_c/total_combs, 100*gaso_a/total_combs, 100*diesel/total_combs);
    }
    
    return 0;
}