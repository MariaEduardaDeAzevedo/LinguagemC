#include <stdio.h>
#include <math.h>

int main(void) {

    double a = 0;
    double b = 0;
    double c = 0;
    double maior = 0;
    double menorA = 0;
    double menorB = 0;

    printf("Digite os valores dos lados do triângulo: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a > b) {
        if (a > c) {
            maior = a;
            menorA = b;
            menorB = c;
            
        } else {
            maior = c;
            menorA = a;
            menorB = b;
        }
    } else {
        if (b > c) {
            maior = b;
            menorA = a;
            menorB = c;
        } else {
            maior = c;
            menorA = a;
            menorB = b;
        }
    }

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && a == c && c == b) {
            printf("Equilátero\n");
        } else if (a == b || a == c || c == b) {
            printf("Isósceles\n");
        } else {
            printf("Escaleno\n");
        }

        if (pow(maior, 2.0) == (pow(menorA, 2.0) +  pow(menorB, 2.0))) {
            printf("Retângulo\n");
        }

    } else {
        printf("O triângulo não existe\n");
    }

    return 0;
}