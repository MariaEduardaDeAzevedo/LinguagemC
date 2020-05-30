#include <stdio.h>
/*
A questão é a seguinte: A peça de xadrez chamada cavalo pode 
se mover pelo tabuleiro vazio e tocar cada uma das 64 casas 
apenas uma única vez? Escreva um programa que executa o passeio 
do cavalo. Sugestão: utilize dois arrays de 8 posições cada, um 
para representar movimentos na horizontal e um para representar 
movimentos na vertical.
*/
int main(void) {
    
    int posicoes[8][8];
    int posX = 0;
    int posY = 0;
    int casas = 1;

    printf("Posição X inicial do cavalo: ");
    scanf("%d", &posX);
    printf("Posição Y inicial do cavalo: ");
    scanf("%d", &posY);

    posicoes[posX][posY] = 1;

    while (casas < 64)
    {
        printf("\n%d casas passadas\n", casas);
        int moverX = 0;
        int moverY = 0;
        int escolha = 0;

        printf("\nDeseja jogar X ou Y antes? [0 para X, 1 para Y]: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Mover X [1 ou 2 casas, + para direita, - para esquerda]: ");
            scanf("%d", &moverX);
            printf("Mover Y [1 ou 2 casas, + para baixo, - para cima]: ");
            scanf("%d", &moverY);
        } else {
            printf("Mover Y [1 ou 2 casas, + para baixo, - para cima]: ");
            scanf("%d", &moverY);
            printf("Mover X [1 ou 2 casas, + para direita, - para esquerda]: ");
            scanf("%d", &moverX);
        }

        while (posX + moverX < 0 || posY + moverY < 0 || moverX > 2 || 
        moverX == 0 || moverX < -2 || moverY > 2 || moverY == 0 
        || moverY < -2 || posX + moverX > 7 || posY + moverY > 7 ||
        posicoes[posX + moverX][posY + moverY] == 1) {
            printf("Não é possível realizar o movimento\n");
            printf("\nDeseja jogar X ou Y antes? [0 para X, 1 para Y]: ");
            scanf("%d", &escolha);

            if (escolha == 0) {
                printf("Mover X [1 ou 2 casas, + para direita, - para esquerda]: ");
                scanf("%d", &moverX);
                printf("Mover Y [1 ou 2 casas, + para baixo, - para cima]: ");
                scanf("%d", &moverY);
            } else {
                printf("Mover Y [1 ou 2 casas, + para baixo, - para cima]: ");
                scanf("%d", &moverY);
                printf("Mover X [1 ou 2 casas, + para direita, - para esquerda]: ");
                scanf("%d", &moverX);
            }
        }

        posX += moverX;
        posY += moverY;

        posicoes[posX][posY] = 1;

        printf("\nCavalo está em (%d,%d)\n", posX, posY);

        casas ++;
    }    
}
