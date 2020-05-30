#include <stdio.h>
#include <math.h>

/*
Escreva um programa que imprime todos os números primos que estão entre 1 e 100.
*/
int main(void) {
    
    for (int i = 2; i <= 100; i++) {
        int divisor = 2;
        int isPrimo = 1; //Assumimos que o número é primo
        while (isPrimo == 1 && divisor < sqrt(i)) //Verificando até a raiz quadrada
        {
            if (i % divisor == 0) {
                isPrimo = 0; //Se encontrar um divisor, muda o valor da variável isPrimo
            }
            divisor ++;
        }
        if (isPrimo == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}