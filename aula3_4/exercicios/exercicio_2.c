#include <stdio.h>
/*
Escreva uma função que retorne o k-ésimo dígito 
(da direita para a esquerda) de um inteiro n, k e n dados. 
Por exemplo kesimodigito(2845, 3) = 8.
*/

int kesimodigito(long num, int pos);

int main(void) {
    long num = 0;
    int pos = 0;

    printf("Digite um número: ");
    scanf("%ld", &num);
    printf("Digite uma posição: ");
    scanf("%d", &pos);
    printf("%d está na %d posição\n", kesimodigito(num, pos), pos);
    return 0;
}

int kesimodigito(long num, int pos) {
    int digito = 0;
    long numero = num;

    for (int i = 0; i < pos - 1; i++)
    {
        numero = numero/10;
    }

    digito = numero - (numero/10) * 10;

    return digito;
}