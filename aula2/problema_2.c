#include <stdio.h>
#include <math.h>

/*
Calculando juros compostos com for
*/
int main(void)
{
    double valorInvestido = 1000;
    double taxa = 0.05;

    printf("Valor investido: ");
    scanf("%lf", valorInvestido);
    printf("Taxa:");
    scanf("%lf", taxa);
    
    printf("%4s%21s\n", "Ano", "Valor");

    for (int i = 1; i <= 10; i++)
    {
        double juros = valorInvestido*pow(1 + taxa, i);
        printf("%4d%21.2f\n", i, juros);
    }
    
    return 0;
}
