#include <stdio.h>
#include <math.h>

int main(void) {
    float a = 0;
    float b = 0;
    float c = 0;
    float delta = 0;
    float x1 = 0;
    float x2 = 0;

    printf("Digite os valores dos coeficientes: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = pow(b, 2.0) - (4 * a * c);

    if (delta == 0) {
        x1 = x2 = -(b)/(2*a);
        printf("Duas raízes iguais\n");
        printf("x1 = x2 = %.1f\n", x1);
    } else if (delta > 0) {
        x1 = (-(b) + sqrt(delta))/(2*a);
        x2 = (-(b) - sqrt(delta))/(2*a);
        printf("Duas raízes distintas\n");
        printf("x1 = %.1f  x2 = %.1f\n", x1, x2);
    } else {
        printf("Não existem raízes reais\n");
    }

    return 0;
}