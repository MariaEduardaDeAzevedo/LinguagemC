#include <stdio.h>

int main(void) {
    int numero = 0;
    int d_milhar = 0;
    int u_milhar = 0;
    int centena = 0;
    int dezena = 0;
    int unidade = 0;
    int anterior = 0;

    printf("Digite um inteiro de 5 algarismos: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    anterior = unidade;
    dezena = ((numero % 100) - anterior) / 10;
    anterior = (numero % 100);
    centena = (numero % 1000 - anterior) / 100;
    anterior = (numero % 1000);
    u_milhar = (numero % 10000 - anterior) / 1000;
    anterior = (numero % 10000);
    d_milhar = (numero % 100000 - anterior) / 10000;

    printf("%d   %d   %d   %d   %d\n", d_milhar, u_milhar, centena, dezena, unidade);

    return 0;
}
