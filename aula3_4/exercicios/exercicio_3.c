#include <stdio.h>
/*
O fatorial ímpar de um número n ímpar positivo é o 
produto de todos os números ímpares positivos menores
do que ou iguais a n. Indicando o fatorial ímpar de n por
n| temos, n| = 1*2*3*5*...*n. Por exemplo, 7| = 1*3*5*7 = 105. 
Escreva uma função para determinar o fatorial ímpar de um 
inteiro ímpar dado.
*/

int fat_impar(int n);

int main(void) {
    int n = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("%d é o fatorial ímpar de %d\n", fat_impar(n), n);
}

int fat_impar(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i+= 2)
    {
        fat *= i;
    }
    return fat;
}
