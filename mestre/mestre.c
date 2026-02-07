#include <stdio.h>

#define N 5  // Tamanho da matriz para habilidades

// Função para exibir matriz
void exibirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[N][N] = {0};
    int cruz[N][N] = {0};
    int octaedro[N][N] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < N; j++) cone[2][j] = 1;

    // Cruz
    cruz[0][2] = 1;
    for (int j = 0; j < N; j++) cruz[1][j] = 1;
    cruz[2][2] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("Cone:\n");
    exibirMatriz(cone);

    printf("Cruz:\n");
    exibirMatriz(cruz);

    printf("Octaedro:\n");
    exibirMatriz(octaedro);

    return 0;
}
