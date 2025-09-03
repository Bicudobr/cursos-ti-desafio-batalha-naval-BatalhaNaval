#include <stdio.h> // Biblioteca padrão de entrada e saída

#define TAM 10 // definicao para o tamanho do tabuleiro

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializa com zeros

    // Navio 1: Diagonal principal (de cima à esquerda para baixo à direita)
    for (int i = 0; i < 4; i++) { // codigo para navio de tamanho 4
        tabuleiro[i][i] = 3; //condigo de representacao de navio
        printf("Navio diagonal 1 em: (%d, %d)\n", i, i); // exibir a posicao no tabuleiro
    }

    // Navio 2: Diagonal secundária (de cima à direita para baixo à esquerda)
    for (int i = 0; i < 4; i++) { // codigo para navio de tamanho 4
        tabuleiro[i][TAM - 1 - i] = 3; //condigo de representacao de navio
        printf("Navio diagonal 2 em: (%d, %d)\n", i, TAM - 1 - i); // exibir a posicao no tabuleiro
    }

    // Navio 3: Horizontal (linha 5, colunas 2 a 5)
    for (int j = 2; j <= 5; j++) { // codigo para navio de tamanho 4
        tabuleiro[5][j] = 3; //condigo de representacao de navio
        printf("Navio horizontal em: (%d, %d)\n", 5, j);    // exibir a posicao no tabuleiro
    }

    // Navio 4: Vertical (coluna 7, linhas 6 a 9)
    for (int i = 6; i <= 9; i++) { // codigo para navio de tamanho 4
        tabuleiro[i][7] = 3; //condigo de representacao de navio
        printf("Navio vertical em: (%d, %d)\n", i, 7);   // exibir a posicao no tabuleiro
    }

    // Mostrar o tabuleiro completo
    printf("\nTabuleiro completo:\n"); // demonstrar o tabuleiro
    for (int i = 0; i < TAM; i++) { // comando utilizado para percorrer o tabuleiro
        for (int j = 0; j < TAM; j++) { // comando utilizado para percorrer o tabuleiro
            printf("%d ", tabuleiro[i][j]); // comando para exibir o tabuleiro
        }
        printf("\n"); // nova linha para cada linha do tabuleiro
    }

    return 0;
}

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

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

    return 0;
}
