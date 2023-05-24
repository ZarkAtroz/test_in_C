int main(int argc, char const *argv[]) {
    
    int area, base, altura;

    printf("Informe a base do triangulo: ");
    scanf("%d", &base);

    printf("Informe a altura do triangulo: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo sera: %d", area);
    
    return 0;
}
