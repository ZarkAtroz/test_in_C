int main(int argc, char const *argv[])
{
    int num_1, num_2;
    float resultado;
    char op;
    
    printf ("Informe primeiro numero: ");
    scanf ("%d", &num_1);
    
    printf ("Informe segundo numero: ");
    scanf ("%d", &num_2);
    
    printf ("Informe operacao: ");
    scanf (" %c", &op);
    
    switch (op) {
        case '+': resultado = num_1+num_2;
            break;
        case '-': resultado = num_1-num_2;
            break;
        case '*': resultado = num_1*num_2;
            break;
        case '/': resultado = num_1/num_2;
            break;
        default:
        printf("Operacao invalido!");
            break;
    }


    /*case '+': resultado = num_1+num_2;
    case '-': resultado = num_1-num_2;
    case '*': resultado = num_1*num_2;
    case '/': resultado = num_1/num_2;*/
    
    printf ("Resultado: %.0f", resultado);

    return 0;
}
