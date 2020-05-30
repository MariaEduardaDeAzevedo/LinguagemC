#include <stdio.h>

int main(void) {
    double vendas = 0;
    double salario_semana = 0;

    printf("Digite o valor de vendas da semana: ");
    scanf("%lf", &vendas);

    salario_semana = 200 + (vendas * 0.09);

    printf("Salário da semana = R$ %.2f\n", salario_semana);

    return 0;
}