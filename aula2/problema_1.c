#include <stdio.h>

int main(void)
/*
Determinar média de números passados na entrada utilizando while
*/
{
    float soma = 0;
    float media = 0;
    int contador = 1;
    int quantDeNotas = 0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantDeNotas);

    while (contador <= quantDeNotas) {
        int nota = 0;
        scanf("%d", &nota);
        soma += nota;
        contador ++;
    }

    media = soma / quantDeNotas;
    
    printf("Media: %.2f\n", media);

    return 0;
}
