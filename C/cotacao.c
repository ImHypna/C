#include <stdio.h>

int main()
{
    float dolar,reais,conta;
    printf("digite a cotação do dolar: ");
    scanf("%f",&dolar);
    printf("digite o quanto vc deseja converter: ");
    scanf("%f",&reais);
    conta = reais/dolar;
    printf("%.1f reais sao %.1f dolares",reais,conta);
    

    return 0;
}
