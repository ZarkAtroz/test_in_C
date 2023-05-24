int main(int argc, char const *argv[])
{
    int num1, num2, num3, v_menor;

    printf("Informe primeiro numero: ");
    scanf("%d", &num1);

    v_menor = num1;

    printf("Informe segundo numero: ");
    scanf("%d", &num2);

    if (num2 < v_menor) {
        v_menor = num2;
    }

    printf("Informe terceiro numero: ");
    scanf("%d", &num3);

    if (num3 < v_menor) {
        v_menor = num3;
    }
    
    printf("O menor valor entre os tres numero e %d", v_menor);
    
    return 0;
}
