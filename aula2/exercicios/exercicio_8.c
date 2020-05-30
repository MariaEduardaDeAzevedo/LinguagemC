#include <stdio.h>

/*
Escreva um programa para determinar o mínimo múltiplo comum de dois números positivos.
*/
int main(void)
{
    int numeroA = 0;
    int numeroB = 0;
    int mmc = 0;
    int fim = 0;
    int inicio = 0;
    int contador = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &numeroA);
    printf("Digite o segundo número: ");
    scanf("%d", &numeroB);

    fim = numeroA * numeroB;
    
    if (numeroA > numeroB) {
        inicio = numeroA;
    } else {
        inicio = numeroB;
    }

    contador = inicio;
    
    while (mmc == 0 && contador <= fim)
    {
        if (contador % numeroA == 0 && contador % numeroB == 0) {
            mmc = contador;
        }    

        contador ++;
    }

    printf("O MMC de %d e %d é %d\n", numeroA, numeroB, mmc);

    return 0;
}
