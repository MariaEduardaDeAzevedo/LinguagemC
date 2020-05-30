#include <stdio.h>
/*
Escreva um programa que converte temperaturas de 30 graus Celsius até 
50 graus Celsius para graus Fahrenheit.
*/
int main(void) {

    printf("%6s%12s", "Celsius", "Fahrenheit\n");

    for (int celsius = 30; celsius <= 50; celsius++)
    {
        double fahrenheit = (9.0/5.0 * celsius) + 32; //Fórmula de transformação
        
        printf("%3d°C%9.1lf°F\n", celsius, fahrenheit);
    }

    return 0;
}