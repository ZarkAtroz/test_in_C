int main(int argc, char const *argv[])
{
    float soma, numerador, denominador;

    for(int i = 1; i <= 50; i++){

        if (i % 2 == 1) {
            soma = soma + numerador / denominador;
        } else {
            soma = soma - numerador / denominador;
        }
        
        numerador = numerador - 3;
        denominador++;
        
    }

    printf("Resultado %f", soma);
    return 0;
}


/*int main(int argc, char const *argv[])
{
    float soma = 0, numerador = 1000, denominador = 1;

    for(int i = 1; i <= 25; i++){

            soma = soma + numerador / denominador;
            numerador = numerador - 3;
            denominador++;
        
            soma = soma - numerador / denominador;
        
            numerador = numerador - 3;
            denominador++;
        
    }

    printf("Resultado %f", soma);
    return 0;
}*/