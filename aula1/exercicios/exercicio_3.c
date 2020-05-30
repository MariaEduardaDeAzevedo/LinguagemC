#include <stdio.h>

int main(void) {
    //Variáveis
    int num;
    int unidade;

    printf("Digite um inteiro: ");
    //Atribuindo valor da entrada à variável num
    scanf("%d", &num);
    //Fazendo a operação módulo por 10
    unidade = num % 10;
    printf("O algarismo da casa das unidades é: %d\n", unidade);

    return 0;  
}