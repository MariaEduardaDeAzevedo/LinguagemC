#include <stdio.h>

int main(void) {
    double numero = 0;
    int parte_inteira = 0;

    printf("Digite um número para ser arredondado: ");
    scanf("%lf", &numero);
    
    parte_inteira = numero * 10;

    if (parte_inteira % 10 >= 5) {
        parte_inteira = (parte_inteira / 10) + 1;
    } else {
        parte_inteira = (parte_inteira / 10);
    }

    printf("%d\n", parte_inteira);

    return 0;
}