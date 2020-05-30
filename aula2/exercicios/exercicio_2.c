#include <stdio.h>
/*
Escreva um programa que soma os n primeiros números ímpar, n dado. 
Por exemplo, se for fornecido para n o valor 6, o programa deve retornar 36, 
pois 1 + 3 + 5 + 7 + 9 + 11 = 36. Sugestão: use um loop for.
*/
int main(void) {
    
    int n = 0;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n*2; i++) //de 1 até 2n (de 1 até n, temos n/2 números ímpares)
    {
        if (i % 2 != 0) { //Se for ímpar
            soma += i; //Adiciona à soma
        }
    }

    printf("A soma dos %d primeiros inteiros ímpares é %d\n", n, soma);
    
    return 0;
}