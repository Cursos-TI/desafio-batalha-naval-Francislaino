#include <stdio.h>
#define linhas 10
#define colunas 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int tabuleiro[linhas][colunas];
    char colunasLetra[colunas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
   
    // Inicializa o tabuleiro com zeros
    for (int i = 0; i < linhas; i++) {
        
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i][j] = 0; 
            
        }
        
    }

    // navio horizontal 3 posicoes
    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 3;
    int tamanhoNaviohorizontal = 3;
    
    //valida se o navio horizontal cabe no tabuleiro
     int valido = 1;
    if (colunaNavioHorizontal + tamanhoNaviohorizontal <= colunas) {
        for (int j = 0; j < tamanhoNaviohorizontal; j++) {
           if (tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + j] != 0) {
                valido = 0; // Posição já ocupada
                break;
            }
            
            
        }
    } else {
        valido = 0; // Navio não cabe no tabuleiro
    }
    
    if (valido) {
    for (int j = 0; j < tamanhoNaviohorizontal; j++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + j] = 3;
    }
}

    // navio vertical 3 posicoes
    int linhaNavioVertical = 5;
    int colunaNavioVertical = 2;
    int tamanhoNavioVertical = 3;

    //valida se o navio vertical cabe no tabuleiro
    valido = 1;
    if (linhaNavioVertical + tamanhoNavioVertical <= linhas) {
        for (int i = 0; i < tamanhoNavioVertical; i++) {
            if (tabuleiro[linhaNavioVertical + i][colunaNavioVertical] != 0) {
                valido = 0; // Posição já ocupada
                break;
            }
        }
    } else {
        valido = 0; // Navio não cabe no tabuleiro
    }
    if (valido) {
        for (int i = 0; i < tamanhoNavioVertical; i++) {
            tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;
        }
    }
    
    // navio diagonal 3 posicoes
    int linhaNavioDiagonal = 4;
    int colunaNavioDiagonal = 5;
    int tamanhoNavioDiagonal = 3;
   

    //valida se o navio diagonal cabe no tabuleiro
    valido = 1;
    if (linhaNavioDiagonal + tamanhoNavioDiagonal <= linhas && colunaNavioDiagonal + tamanhoNavioDiagonal <= colunas) {
        for (int i = 0; i < tamanhoNavioDiagonal; i++) {
            if (tabuleiro[linhaNavioDiagonal + i][colunaNavioDiagonal + i] != 0) {
                valido = 0; // Posição já ocupada
                break;
            }
        }
    } else {
        valido = 0; // Navio não cabe no tabuleiro
    }

    if (valido) {
        for (int i = 0; i < tamanhoNavioDiagonal; i++) {
            tabuleiro[linhaNavioDiagonal + i][colunaNavioDiagonal + i] = 3;
        }
    }

    //navio diagonal subindo 3 posicoes
    int linhaNavioDiagonal2 = 9;
    int colunaNavioDiagonal2 = 3;
    int tamanhoNavioDiagonal2 = 3;

    //valida se o navio diagonal subindo cabe no tabuleiro
    valido = 1;
    if (linhaNavioDiagonal2 - tamanhoNavioDiagonal2 + 1 >= 0 && colunaNavioDiagonal2 + tamanhoNavioDiagonal2 <= colunas) {
        for (int i = 0; i < tamanhoNavioDiagonal2; i++) {
            if (tabuleiro[linhaNavioDiagonal2 - i][colunaNavioDiagonal2 + i] != 0) {
                valido = 0; // Posição já ocupada
                break;
            }
        }
    } else {
        valido = 0; // Navio não cabe no tabuleiro
    }


    if (valido) {
        for (int i = 0; i < tamanhoNavioDiagonal2; i++) {
            tabuleiro[linhaNavioDiagonal2 - i][colunaNavioDiagonal2 + i] = 3;
        }
    }

    // Exibe o tabuleiro atualizado
    printf("  ");
    for (int i = 0; i < colunas; i++) {
        printf(" %c", colunasLetra[i]);
    }
    printf("\n");

    for (int i = 0; i < linhas; i++) {
        printf("%2d", i + 1);
        for (int j = 0; j < colunas; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }


   


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

    return 0;
}
