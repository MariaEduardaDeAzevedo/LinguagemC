#include <stdio.h>
/*
Sem usar o operador de módulo (%), escreva um programa que determina o
quociente e o resto da divisão entre dois inteiros positivos. 
Sugestão: use um loop while.
*/

int main(void) {
    
    int dividendo = 0;
    int divisor = 0;
    int quociente = 0;
    int resto = 0;
    
    printf("Dividendo: ");
    scanf("%d", &dividendo);
    printf("Divisor: ");
    scanf("%d", &divisor);

    resto = dividendo; //Resto inicia com o valor do dividendo

    //Divisão == sucessão de subtrações
    while (resto >= divisor) { //Se o resto for maior ou igual ao divisor, ainda consigo subtrair
        resto -= divisor;
        quociente ++; //Incrementa o quociente a cada repetição
    }

    printf("%d/%d tem quociente igual a %d e deixa resto %d\n", dividendo, divisor, quociente, resto);

    return 0;
}