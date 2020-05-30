#include <stdio.h>


/*
Estruturas de repetição laços for e while
*/
int main(void) {
    
    int cont; //Variável de controle (contador)
    
    printf("\nfor: \n");
    cont = 0; //Variável de controle (contador)
    // contador iniciando em 0, enquanto o contador for menor que 10, incrementa e repete
    for (cont = 0; cont < 10; cont++) 
    {
        printf("%d\n", cont);
    }

    printf("\nwhile: \n");
    cont = 0; //Variável de controle (contador)
    while (cont < 10) //Enquanto a condição não for satisfeita, repete
    {
        printf("%d\n", cont);
        cont ++;
    }

    printf("\ndo while: \n");
    cont = 0; //Variável de controle (contador)
    do //Faça enquanto a condição não for satisfeita
    {
        printf("%d\n", cont);
        cont ++;
    } while (cont < 10);
    
    return 0;
}