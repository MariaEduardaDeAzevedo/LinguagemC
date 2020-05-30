#include <stdio.h>
#include <math.h>

int main(void) {
    //Variáveis
    float bmi = 0;
    float massa = 0;
    float altura = 0;
    
    printf("Massa (em KG): ");
    scanf("%f", &massa); //Pega a massa em kg da entrada
    printf("Altura (em m): ");
    scanf("%f", &altura); //Pega a altura em m da entrada
    bmi = massa / pow(altura, 2.0); // Calculando o BMI

    printf("BMI = %.1f\n", bmi); //Saída do valor do BMI

    //Avaliando o valor do BMI
    if (bmi < 18.5) {
        printf("Abaixo do peso\n");
    } else if (bmi < 25) {
        printf("Peso Normal\n");
    } else if (bmi < 30) {
        printf("Acima do peso\n");
    } else {
        printf("Obeso\n");
    }

    return 0;
}