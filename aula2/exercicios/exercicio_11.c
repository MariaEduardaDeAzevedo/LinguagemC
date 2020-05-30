#include <stdio.h>

/*
Escreva um programa usando estruturas de repetição para desenhar 
diamantes de asteriscos usando um número mínimo de ifs e printfs.
O usuário digita um número de 1 a 19 para determinar a quantidade 
de asteriscos. Por exemplo: [exemplo no arquivo]
*/
int main(void)
{

    int n = 0;
    int cont = 0;

    printf("Digite um número de 1 a 19: ");
    scanf("%d", &n);

    cont = n;

    for (int i = 1; i <= n; i++)
    {
        cont --;
        printf("%*s", cont, "");
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    cont = -1;

    for (int i = n; i >= 1; i--)
    {
        cont ++;
        printf("%*s", cont, "");
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("%*s", n/2, " ");
        printf("\n");
    }
    return 0;
}

