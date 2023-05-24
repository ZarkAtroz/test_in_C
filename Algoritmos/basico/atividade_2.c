int main(int argc, char const *argv[])
{
    int h, min, s, total_s;
    
        printf("Informe a quantidade de horas: ");
        scanf("%d", &h);
    
        printf("Informe a quantidade de minutos: ");
        scanf("%d", &min);
    
        printf("Informe a quantidade de segundos: ");
        scanf("%d", &s);

        total_s = h * 3600 + min * 60 + s;
    
        printf("O tempo total é: %d segundos", &total_s);
    
    return 0;
}