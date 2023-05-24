int main(int argc, char const *argv[])
{
    int num1, num2, aux;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("Primeiro numero: %d.", num1);
    printf("\nSegundo numero numero: %d.", num2);

    return 0;
}
