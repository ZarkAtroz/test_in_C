int main(int argc, char const *argv[])
{
    int t_comb;
    float l_abs, p_litro, p_total;

    printf("Litros abastecidos: ");
    scanf("%f", &l_abs);

    printf("Informe o tipo de combustivel (1 - alcool ou 2 - gasolina): ");
    scanf("%d", &t_comb);

    printf("Preco por litro: ");
    scanf("%f", &p_litro);

    if (t_comb == 1) {
        if (l_abs <= 20) {
            p_total = l_abs * p_litro * 0.97;
        } else {
            p_total = l_abs * p_litro * 0.95;
        }
        
        
    } else {
        if (l_abs <= 20) {
            p_total = l_abs * p_litro * 0.965;
        } else {
            p_total = l_abs * p_litro * 0.94;
        }
        
        
    }
    
    printf("Total a pagar: %.2f", p_total);

    return 0;
}
