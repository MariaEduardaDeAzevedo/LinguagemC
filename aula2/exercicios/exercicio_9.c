#include <stdio.h>

/*
Escreva um programa para calcular a soma dos n primeiros termos da sequência: 
{ ½, ⅗, ⅝, …}
*/
int main(void)
{
    float numerador = 1;
    float denominador = 2;
    float soma = 0;
    int n = 0;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        soma += numerador/denominador;
        numerador += 2;
        denominador += 3;
    }

    printf("A soma dos %d primeiros termos da sequência é %.1f\n", n, soma);

    return 0;
}

