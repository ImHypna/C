#include<stdio.h>

int main()
{
    int valor1,valor2,valor3,valor4;
    int soma,multiplica;

    printf("Digite um valor: ");
    scanf("%i",&valor1);
    printf("\nDigite um valor: ");
    scanf("%i",&valor2);
    printf("\nDigite um valor: ");
    scanf("%i",&valor3);
    printf("\nDigite um valor: ");
    scanf("%i",&valor4);
    soma = valor2+valor4;
    multiplica = valor1*valor3;
    printf("%i\n%i",multiplica,soma);

    
    return 0;
}
