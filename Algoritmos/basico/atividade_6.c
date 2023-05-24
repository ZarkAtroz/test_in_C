int main(int argc, char const *argv[])
{
    float v_real, tax_dol, v_dol;

        printf("Informe o valor em reais: ");
        scanf("%f", &v_real);

        printf("Informe a contacao do dolar: ");
        scanf("%f", &tax_dol);

        v_dol = v_real / tax_dol;

        printf("A conversao resultou em %0f", v_dol);
    return 0;
}