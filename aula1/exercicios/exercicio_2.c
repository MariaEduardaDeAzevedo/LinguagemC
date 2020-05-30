#include <stdio.h>

int main(void) {
    //Variáveis
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int produto = 0;
    int soma = 0;
    float media = 0;

    printf("Digite três inteiros: ");
    //Atribuindo valores da entrada às variáveis
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    //Calculando produto dos números
    produto = num1 * num2 * num3;
    //Calculando soma dos números
    soma = num1 + num2 + num3;
    //Calculando média dos números
    media = soma / 3.0;

    //Saídas da soma, média e produto
    printf("A soma é %d\n", soma);
    printf("A média é %f\n", media);
    printf("O produto é %d\n", produto);

    if (num1 > num2) { //Comparando valores dois a dois para descobrir o maior
        if (num1 > num3) {
            printf("O maior é %d\n", num1);
            if (num2 < num3) { //Comparando os menores valores dois a dois 
                printf("O menor é %d\n", num2);
            } else {
                printf("O menor é %d\n", num3);
            }
        } else {
            printf("O maior é %d\n", num3);
            if (num1 < num2) { //Comparando os menores valores dois a dois 
                printf("O menor é %d\n", num1);
            } else {
                printf("O menor é %d\n", num2);
            }
        }
    } else {
        if (num2 > num3) {
            printf("O maior é %d\n", num2);
            if (num1 < num3) {
                printf("O menor é %d\n", num1);
            } else {
                printf("O menor é %d\n", num3);
            }
        } else {
            printf("O maior é %d\n", num3);
            if (num1 < num2) { //Comparando os menores valores dois a dois 
                printf("O menor é %d\n", num1);
            } else {
                printf("O menor é %d\n", num2);
            }
        }
    }

    return 0;
}