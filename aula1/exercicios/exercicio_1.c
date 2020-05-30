#include <stdio.h>

int main(void) {
    //Variáveis 
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int produto = 0;

    printf("Digite três inteiros: "); 
    //Atribuindo valores da entrada às variáveis
    scanf("%d", &num1); 
    scanf("%d", &num2);
    scanf("%d", &num3);
    //Calculando produto
    produto = num1 * num2 * num3;
    //Saída
    printf("Produto = %d\n", produto);
    
    return 0;
}