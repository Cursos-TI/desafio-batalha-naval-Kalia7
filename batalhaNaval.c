#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LIN 10
#define COL 10
#define TAMANHO_NAVIO 3

int main() {
    //
    int tabuleiro[LIN][COL];
    
    //inicializa o tabuleiro com 0
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    //Valores dos navios
    int navio1[TAMANHO_NAVIO] = {3, 3, 3}; // Vertical
    int navio2[TAMANHO_NAVIO] = {3, 3, 3}; // Horizontal
    int navio3[TAMANHO_NAVIO] = {3, 3, 3}; // Diagonal
    int navio4[TAMANHO_NAVIO] = {3, 3, 3}; // Diagonal

    //coordenadas navios
    int linhaNavio1 = 5;
    int colunaNavio1 = 6;
    int linhaNavio2 = 4;
    int colunaNavio2 = 5;
    int linhaNavio3 = 0;
    int colunaNavio3 = 0;
    int linhaNavio4 = 0;
    int colunaNavio4 = 9;

    //Posiciona navio na vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[linhaNavio1][colunaNavio1 + i] = navio1[i];
    }

    //Posiciona navio na horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i];
    }

    //Posiciona navio na diagonal
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = navio3[i];
    }

    //Posiciona navio na diagonal invertida
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = navio4[i];
    }
    
    
    //imprime o tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0