#include <stdio.h>
#include <math.h>

/*
Escreva um programa para calcular o valor do número pi usando a série infinita: 
pi = 4 - 4/3 + ⅘ - 4/7 + 4/9 - 4/11 + … . O seu programa deve imprimir uma tabela
mostrando o valor de pi aproximado para um termo da série, para dois termos, para
três termos e assim sucessivamente até n termos definidos pelo usuário. Quantos 
termos da série você deve usar para chegar aos valores 3.14, 3.141, 3.1415 e 
3.14159 ?
*/
int main(void)
{
    int n = 0;
    float pi = 0;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    printf("%10s%20s\n", "n", "PI");

    for (int i = 0; i < n; i++)
    {
        pi += pow(-1, i)*4/(2*i + 1);
        if (pi == 3.14 || pi == 3.141 || pi * 4 == 3.1415 || pi == 3.14159) {
            printf("-> %10d%20f\n", i, pi);
        } else {
            printf("%10d%20f\n", i, pi);
        }
    }

    //Dúvida ao encontrar termos da série você deve usar para chegar aos valores desejados.

    return 0;
}

