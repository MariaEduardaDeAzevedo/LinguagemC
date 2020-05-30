#include "aula3.h" //Arquivo de cabeçalho

/*
Funções
-------------
Modularização de código == melhoramento da qualidade de código

Arrays
-------------
<tipo> array[n];
onde n é o número de espaços do array
<tipo> array[3] = {1, 2, 3};
<tipo> array[4] = {0};
*/

int main(void) {
    //Função Principal

    //Usando getMax

    int max = 0; //variável local (dentro do escopo de uma função)
    int array[3] = {0};

    scanf("%d", &array[0]);
    scanf("%d", &array[1]);
    scanf("%d", &array[2]);

    max = getMax(3, array);

    printf("%d\n", max);

    return 0;
}

int getMax(int n, int array[]) {

    int max = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}
