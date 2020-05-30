#include <stdio.h>


int main(void) {
    int mes = 0;
    
    printf("Digite o número correspondente ao mês: ");
    scanf("%d", &mes);
    
    if (mes == 2) {
        printf("28 ou 29\n");
    } else if (mes < 8) {
        if (mes % 2 == 0) {
            printf("30\n");
        } else {
            printf("31\n");
        }
    } else {
        if (mes % 2 == 0) {
            printf("31\n");
        } else {
            printf("30\n");
        }
    }
    return 0;
}