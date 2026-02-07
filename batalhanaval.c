#include <stdio.h>

#define TAMANHO 10   // Tamanho fixo do tabuleiro (10x10)
#define NAVIO 3      // Valor que representa as partes do navio
#define TAM_NAVIO 3  // Tamanho fixo dos navios (3 posições)

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar um navio horizontalmente
int posicionarNavioHorizontal(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    // Verifica se o navio cabe dentro do tabuleiro
    if (coluna + TAM_NAVIO > TAMANHO) {
        return 0; // Não cabe
    }
    // Verifica se há sobreposição
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha][coluna + i] != 0) {
            return 0; // Já ocupado
        }
    }
    // Posiciona o navio
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = NAVIO;
    }
    return 1; // Sucesso
}

// Função para posicionar um navio verticalmente
int posicionarNavioVertical(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    // Verifica se o navio cabe dentro do tabuleiro
    if (linha + TAM_NAVIO > TAMANHO) {
        return 0; // Não cabe
    }
    // Verifica se há sobreposição
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha + i][coluna] != 0) {
            return 0; // Já ocupado
        }
    }
    // Posiciona o navio
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = NAVIO;
    }
    return 1; // Sucesso
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    // Inicializa o tabuleiro com água
    inicializarTabuleiro(tabuleiro);

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linhaHorizontal = 2, colunaHorizontal = 4; // Navio horizontal
    int linhaVertical = 5, colunaVertical = 7;     // Navio vertical

    // Posiciona os navios e valida
    if (!posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal)) {
        printf("Erro ao posicionar navio horizontal!\n");
    }
    if (!posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical)) {
        printf("Erro ao posicionar navio vertical!\n");
    }

    // Exibe o tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}