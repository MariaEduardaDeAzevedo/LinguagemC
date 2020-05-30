#include <stdio.h>
/*
Escreva um programa que determina o menor divisor próprio de um inteiro 
(excluindo o número 1). Sugestão: use um loop while.
*/
int main(void) {
    
    int numero = 0;
    int div = 1; //Inicia a tentativa de divisor em 1 
    printf("Digite um número: ");
    scanf("%d", &numero);

    do //Se a condição do while não for satisfeita
    {
      div ++; //Incrementa a tentativa de divisor
    } while (numero % div != 0);
    
    printf("%d é o menor divisor de %d\n", div, numero);

    return 0;
}