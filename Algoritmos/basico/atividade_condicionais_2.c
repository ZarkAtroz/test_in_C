int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("Infome o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("Numero em ordem crecente: %d, %d", num2, num1);
    } else {
        printf("Numero em ordem crecente: %d, %d", num1, num2);
    }
    
    return 0;
}
