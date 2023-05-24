int main(int argc, char const *argv[])
{
    int quant_dias;
    float km_perc, v_pagar;

    printf("Informe quilometragem percorrida: ");
    scanf("%f", &km_perc);

    printf("Informe a quantidade de dias que o veiculo ficou locado: ");
    scanf("%d", &quant_dias);

    v_pagar = (km_perc * 0.15)+(quant_dias * 70);

    printf("Total a pagar: %.2f", v_pagar);

    return 0;
}
