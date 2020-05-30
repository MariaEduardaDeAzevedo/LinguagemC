#include <stdio.h>

/*
------------> Fazer para números reais também

Um triângulo retângulo pode ter lados que são todos inteiros. 
O conjunto de três valores inteiros para os lados do triângulo 
retângulo é chamado de tripla pitagórica. Esses três lados devem 
ter um relacionamento de forma que o quadrado de dois dos lados 
é igual ao quadrado da hipotenusa. Encontre todos as triplas para 
lado1, lado2 e hipotenusa todos menores que 500. Um tripla desse 
conjunto, por exemplo, é 3, 4, 5. Esse é um exemplo de computação 
por força-bruta.
*/
int main(void) {
    
    int a = 3;
    int b = 4;
    int c = 5;
    int hip = c;
    int razao = 1; 
    while (hip < 500) {
        hip = c*razao;
        int cateto_a = a*razao;
        int cateto_b = b*razao;
        printf("%d %d %d\n", cateto_a, cateto_b, hip);
        razao ++;
    }
    
    return 0;
}
