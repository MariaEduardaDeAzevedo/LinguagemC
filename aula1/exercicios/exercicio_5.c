#include <stdio.h>

int main(void) {
    double salario = 0;
    double novo_salario = 0;

    printf("Digite seu salário: ");
    scanf("%lf", &salario);

    if (salario <= 2000) {
        novo_salario = salario + salario * 0.13;
    } else if (salario <= 4000) {   
        novo_salario = salario + salario * 0.11;
    } else if (salario <= 8000) {
        novo_salario = salario + salario * 0.09;
    } else {
        novo_salario = salario + salario * 0.07;
    }

    printf("Novo salário = R$ %.2f\n", novo_salario); 

    return 0;
}