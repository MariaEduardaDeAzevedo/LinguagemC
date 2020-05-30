#include <stdio.h>

/*
Utilize arrays em Linguagem C para escrever um programa para calcular
o produto entre duas matrizes e salvar o resultado numa terceira matriz.
*/
int main(void) {
    //Matriz 1
    int linhas1 = 0;
    int colunas1 = 0;

    //Matriz 2
    int linhas2 = 0;
    int colunas2 = 0;

    printf("Linhas da Matriz 1: ");
    scanf("%d", &linhas1);
    printf("Colunas da Matriz 1: ");
    scanf("%d", &colunas1);

    printf("Linhas da Matriz 2: ");
    scanf("%d", &linhas2);
    printf("Colunas da Matriz 2: ");
    scanf("%d", &colunas2);

    if (colunas1 == linhas2) {
        int m1[linhas1][colunas1];

        printf("\nMatriz 1\n"); 
        for (int i = 0; i < linhas1; i++) 
        {
            for (int j = 0; j < colunas1; j++)
            {   
                printf("Elemento %d%d: ", i, j);
                scanf("%d", &m1[i][j]);
            }
        }

        int m2[linhas2][colunas2];

        printf("\nMatriz 2\n");
        for (int i = 0; i < linhas2; i++) 
        {
            for (int j = 0; j < colunas2; j++)
            {
                printf("Elemento %d%d: ", i, j);
                scanf("%d", &m2[i][j]);
            }
        }

        int resultado[linhas1][colunas2];

        for (int i = 0; i < linhas1; i++)
        {
            for (int j = 0; j < colunas2; j++)
            {
                int e = 0;
                for (int k = 0; k < linhas2; k++)
                {
                    e += m1[i][k] * m2[k][j];
                }
                resultado[i][j] = e;
            }
        }

        printf("\nResultado ---------------\n\n");
        for (int i = 0; i < linhas1; i++)
        {
            for (int j = 0; j < colunas2; j++)
            {
                printf("%4d ", resultado[i][j]);
            }
            printf("\n");;
        }
    
    } else {
        printf("Não é possível multiplicar as matrizes");
    }
    return 0;
}
