#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NONE        "\033[0m"
#define C_GREEN     "\033[32m"
#define BG_GREEN    "\033[42m"

int andar(int posX, int posY, int tabuleiro[8][8], int horizontal[], int vertical[], int mov);

/* Algoritmo do caminho do cavalo
 * com animação sujerida pelo professor.
 *
 * ~Fiz por força bruta, então pode demorar um pouco~
 */
int main(void) 
{
    int tabuleiro[8][8] = {0}; //Matriz que representa o tabuleiro
    int horizontal[8] = {2, 1, -1, -2, -2, -1,  1,  2}; //Movimentos possíveis na horizontal
    int vertical[8] = {1, 2,  2,  1, -1, -2, -2, -1}; //Movimentos possíveis na vertical
    int posX = 0; //Posição horizontal da peça
    int posY = 0; //Posição vertical da peça
    
    //Determinando posição inicial da peça
    printf("Posição inicial do cavalo: ");
    scanf("%d", &posX); 
    scanf("%d", &posY);

    tabuleiro[posX][posY] = 1; //Marca a posição inicial como percorrida

    andar(posX, posY, tabuleiro, horizontal, vertical, 1); //Andamos com a peça
    
    return 0;
}

//Função recursiva que faz o cavalo percorrer o tabuleiro
int andar(int posX, int posY, int tabuleiro[8][8], int horizontal[], int vertical[], int mov) {
    ////////// ANIMAÇÃO ///////////
    sleep(1);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (mov == tabuleiro[i][j]) {
                printf("%s%4d%s", BG_GREEN, tabuleiro[i][j], NONE);
            } else {
                printf("%4d", tabuleiro[i][j]);
            }
        }
        printf("\n\n");
    }

    printf("\n\n");
    //////////////////////////////

    //Condição de parada
    if (mov == 64) {
        return 1;
    }
    for (int i = 0; i < 8; i++) //Tentativa das possibilidades de movimento
    {
	//Calculando coordenadas da próxima posição da peça
        int proxX = posX + horizontal[i];
        int proxY = posY + vertical[i];
	
	// Se a peça poder ser movida e ir até o fim, entra na condição, senão, refaz o movimento
        if (proxX >= 0 && proxX < 8 && proxY >= 0 && proxY < 8 && tabuleiro[proxX][proxY] == 0) {
            //Altera posição da peça
	    posX = proxX; 
            posY = proxY;
            tabuleiro[posX][posY] = mov + 1; //Marca mais uma casa no tabuleiro
            if (andar(posX, posY, tabuleiro, horizontal, vertical, mov + 1) == 1) {
                return 1; //Caso o algoritmo for concluído
            } else {
                tabuleiro[posX][posY] = 0; //Refazendo o movimento
            }
        }
    }    
    return 0;
}
