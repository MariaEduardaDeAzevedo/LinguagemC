#include <stdio.h>

/* 
Escreva um programa para calcular a média de n números. 
*/
int main(void)
{
    float soma = 0;
    float numero = 0;
    int quantidade = 0;
    float media = 0;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite o %d° número: ", i+1);
        scanf("%f", &numero);
        soma += numero;
    }
    
    media = soma/quantidade;

    printf("A media dos %d números digitados é %.2f\n", quantidade, media);

    return 0;
}
