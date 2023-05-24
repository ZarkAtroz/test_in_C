int main(int argc, char const *argv[])
{
    float v_sal, finan_p;


    printf("Informe seu salario: ");
    scanf("%f", &v_sal);


    printf("Informe o valor do financiamento: ");
    scanf("%f", &finan_p);


    if (finan_p <= v_sal * 5) {
        printf("Financiamento Concedido");
    } else {
        printf("Financiamento Negado");
    }


    printf("\nObrigado por nos consultar");
    
    return 0;
}

