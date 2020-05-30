#include <stdio.h>

/*
Aula 1 - Introdução [12/05/2020]

Estrutura:
1. Escopo delimitado por chaves e linhas terminadas em ponto e vírgula
2. Arquivos de cabeçalhos para importar bibliotecas
3. Variáveis de tipo definido (fortemente tipada)
4. Toda função tem retorno
5. Uma função não pode retornar mais de um valor
6. Identação não tem efeito sobre o escopo

Para compilar:
   >> gcc nomedoarquivo.c -o nomedoarquivo
Gera um arquivo executável que para executar apenas digita-se ./nomedoarquivo
no terminal
*/
int main(void) { //Todo programa em C inicia com uma função main
    int numero1 = 0; //Por padrão, essa variável tem um valor que é um lixo da sua memória
    int numero2 = 0;

    printf("Olá, Mundo!\n"); //String com aspas duplas
    printf("Digite dois inteiros: ");
    scanf("%d", &numero1); //pegando valor inteiro da entrada
    scanf("%d", &numero2); // pegando valor inteiro da entrada
    
    // && (and), || (or), == (igual), != (diferente), > (maior que), < (menor que), >= (maior igual), <= (menor igual)
    // + (soma), - (subtração), * (produto), / (divisão), % (módulo)
    if (numero1 == numero2) {
        printf("%d eh igual a %d\n", numero1, numero2);
    } else {
        printf("%d eh diferente de %d\n", numero1, numero2);
        if (numero1 > numero2) {
            printf("%d eh maior que %d\n", numero1, numero2);
        } else {
            printf("%d eh menor que %d\n", numero1, numero2);
        }
    }
    return 0; //Padronização
}