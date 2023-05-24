int main(int argc, char const *argv[])
{
    int num;

    printf("Informe um numero entre 0 e 9: ");
    scanf("%d", &num);

    switch (num)
    {
    case 0: printf("zero\n");
        break;

    case 1: printf("Um\n");
        break;

    case 2: printf("Dois\n");
        break;

    case 3: printf("Tres\n");
        break;

    case 4: printf("Quatro\n");
        break;

    case 5: printf("Cinco\n");
        break;

    case 6: printf("Seis\n");
        break;

    case 7: printf("Sete\n");
        break;

    case 8: printf("Oito\n");
        break;

    case 9: printf("Nove\n");
        break;
    
    default:
        printf("Numero invalido!");
        break;
    }
    return 0;
}


/* Outra forma de fazer se utilizar o ("char")
e no valor utilizar ('_')

int main(int argc, char const *argv[])
{
    char num;

    printf("Informe um numero entre 0 e 9: ");
    scanf("%c", &num);

    switch (num)
    {
    case '0': printf("zero\n");
        break;

    case '1': printf("Um\n");
        break;

    case '2': printf("Dois\n");
        break;

    case '3': printf("Tres\n");
        break;

    case '4': printf("Quatro\n");
        break;

    case '5': printf("Cinco\n");
        break;

    case '6': printf("Seis\n");
        break;

    case '7': printf("Sete\n");
        break;

    case '8': printf("Oito\n");
        break;

    case '9': printf("Nove\n");
        break;
    
    default:
        printf("Numero invalido!");
        break;
    }
    return 0;
}

*/