int main(int argc, char const *argv[])
{
    int num;

    printf("Informe numero: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if ( num % 2 == 0)
        {
            printf("O numero e par.");
    } else {
        printf("O numero e impar.");
        }
        
     } else {
        printf("O valor absoluto do numero e, %d", num * -1);
        }

    return 0;
}
