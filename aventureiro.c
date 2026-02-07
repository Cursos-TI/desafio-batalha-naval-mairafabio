#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3
#define TAM_NAVIO 3

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navio horizontal
    int linhaH = 2, colH = 1;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colH + i] = NAVIO;
        printf("Navio Horizontal: (%d,%d)\n", linhaH, colH + i);
    }

    // Navio vertical
    int linhaV = 5, colV = 4;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colV] = NAVIO;
        printf("Navio Vertical: (%d,%d)\n", linhaV + i, colV);
    }

    // Navio diagonal principal
    int linhaD1 = 0, colD1 = 0;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaD1 + i][colD1 + i] = NAVIO;
        printf("Navio Diagonal Principal: (%d,%d)\n", linhaD1 + i, colD1 + i);
    }

    // Navio diagonal secundária
    int linhaD2 = 0, colD2 = 9;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaD2 + i][colD2 - i] = NAVIO;
        printf("Navio Diagonal Secundária: (%d,%d)\n", linhaD2 + i, colD2 - i);
    }

    // Exibe tabuleiro completo
    exibirTabuleiro(tabuleiro);

    return 0;
}
