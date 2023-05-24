int main(int argc, char const *argv[])
{
    float v_mes, sal;
    int v_sap;

    printf("Informe o valor das vendas do mes: ");
    scanf("%f", &v_mes);

    printf("Informe a quantidade de sapatos vendidos: ");
    scanf("%d", &v_sap);

    sal = v_mes * 0.2 + v_sap * 5;

    printf("O salario e: %.2f", sal);
    
    return 0;
}
