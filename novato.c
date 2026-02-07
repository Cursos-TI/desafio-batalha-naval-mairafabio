#include <stdio.h>

#define TAMANHO 5     // Tabuleiro 5x5 para nível novato
#define NAVIO 3       // Valor que representa navio
#define TAM_NAVIO 3   // Tamanho fixo dos navios

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 1, colunaHorizontal = 0; // Navio horizontal
    int linhaVertical = 0, colunaVertical = 3;     // Navio vertical

    // Posiciona navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO;
        printf("Navio Horizontal: (%d,%d)\n", linhaHorizontal, colunaHorizontal + i);
    }

    // Posiciona navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = NAVIO;
        printf("Navio Vertical: (%d,%d)\n", linhaVertical + i, colunaVertical);
    }

    return 0;
}