int main(int argc, char const *argv[])
{
    int num;

        printf("Informe o numero: ");
        scanf("%d", &num);

        if (num < 0){
            printf("%d", num * -1);
        }
        else{
            printf("%d", num * 1);
        }
        
    return 0;
}
