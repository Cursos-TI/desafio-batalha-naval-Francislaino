#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.


    int tabuleiro[10][10]; 
         

    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};
    int tamanhoNavio = 3;

    // inicializando tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // inicializando o tabuleiro com 0
        }
    }
    // definindo posições do navio 
    int linhaH = 2;
    int colunaH = 1;

    int linhaV = 5;
    int colunaV = 5;

    //validando navios para caber no tabuleiro
    int valido = 1; // assumindo que é válido inicialmente
    if (colunaH + tamanhoNavio > 10) {
        printf("Navio horizontal não cabe no tabuleiro.\n");
        valido = 0;
    }

    if (linhaV + tamanhoNavio > 10) {
        printf("Navio vertical não cabe no tabuleiro.\n");
        valido = 0;
    }

    //verificando  se há sobreposição
    if (valido) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaH][colunaH + i] != 0) {
                valido = 0;
            }
        }
    }

    if (valido) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                valido = 0;
            }
        }
    }
    // posicionando navios no tabuleiro

    if (valido) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaH][colunaH + i] = navioH[i];
        }

    for (int i = 0; i < 3; i++) {
            tabuleiro[linhaV + i][colunaV] = navioV[i];
        }
    }
    // exibindo tabuleiro com coordenadas
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");


    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
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
