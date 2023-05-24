int main(int argc, char const *argv[])
{
    float sal_min, v_kw, total_p;
    int quant_kw;

    printf("Informe valor do salario minimo: ");
    scanf("%f", &sal_min);

    printf("Informe a quantidade de quilowatts gasta: ");
    scanf("%d", &quant_kw);

    v_kw = sal_min / 7 / 100;
    total_p = quant_kw * v_kw;

    printf("Valor kw: %.2f", v_kw);
    printf("\nTotal a pagar: %.2f", total_p);

    return 0;
}
