int main(int argc, char const *argv[])
{
    int i, tabu, num1, num2, mult;

    printf("Mostrar a tabuada de: ");
    scanf("%d", &tabu);

    printf("Comeca por: ");
    scanf("%d", &num1);

    printf("Termina em: ");
    scanf("%d", &num2);

    for (i = num1; i <= num2; i++) {
        
        mult = tabu * i;
        printf("\n%d x %d = %d", tabu, i, mult);

    }
    
    return 0;
}
