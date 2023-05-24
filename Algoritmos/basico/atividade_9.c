int main(int argc, char const *argv[])
{
    float v_gast, gorj, total_p;

    printf("Informe o valor gasto: ");
    scanf("%f", &v_gast);

    gorj = v_gast * 0.1;
    total_p = v_gast + gorj;

    printf("Valor da gorjeta: %.2f", gorj, total_p);
    printf("\nValor total a pagar: %.2f");
    return 0;
}
