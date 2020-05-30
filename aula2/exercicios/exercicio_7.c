#include <stdio.h>

/*
Escreva um programa para determinar o máximo divisor comum de dois números 
positivos. Sugestão: utilize o algoritmo de Euclides.
*/
int main(void)
{
    int numeroA = 0;
    int numeroB = 0;
    int menor = 0;
    int mdc = 0;
    int contador = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &numeroA);
    printf("Digite o segundo número: ");
    scanf("%d", &numeroB);

    if (numeroA > numeroB) {
        menor = numeroB;
    } else {
        menor = numeroA;
    }

    contador = menor;

    while (mdc == 0)
    {
        if (numeroA % contador == 0 && numeroB % contador == 0) {
            mdc = contador;
        }
        contador--; 
    }

    printf("O MDC entre %d e %d é %d\n", numeroA, numeroB, mdc); 

    return 0;
}
