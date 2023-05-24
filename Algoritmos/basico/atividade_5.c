int main(int argc, char const *argv[])
{
    float grau_c, grau_f;

        printf("Informe a temperatura em graus CELCIUS: ");
        scanf("%f", &grau_c);

        grau_f = grau_c * 1.8 + 32;

        printf("A temperatura em fahrenheit sera: %.1f", grau_f);
    
    return 0;
}