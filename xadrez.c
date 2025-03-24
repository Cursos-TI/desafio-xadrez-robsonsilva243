#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0) return; // Condição de parada
    for (int i = 0; i < casasHorizontais; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(casasVerticais - 1, casasHorizontais); // Chamada recursiva
}

// Função para movimentação do Cavalo
void moverCavalo() {
    const int casasParaCima = 2; // O Cavalo se move 2 casas para cima
    const int casasParaDireita = 1; // O Cavalo se move 1 casa para a direita

    printf("Cavalo\n");
    for (int i = 0; i < casasParaCima; i++) {
        for (int j = 0; j < casasParaDireita; j++) {
            printf("Cima\n");
        }
    }
    printf("Direita\n");
}

int main() {
    // Definindo o número de casas a serem movidas para cada peça
    const int torre = 5;
    const int rainha = 8;
    const int bispo = 5;
    const int cavaloBaixo = 2; // O Cavalo se move 2 casas para baixo
    const int cavaloEsquerda = 1; // O Cavalo se move 1 casa para a esquerda

    // Menu Interativo
    printf("Xadrez\n");
    printf("--------\n");

    // Movimentação da torre, 5 casas para direita
    printf("Torre\n");
    moverTorre(torre);

    // Separando a movimentação da Rainha com uma linha em branco
    printf("\n");

    // Movimentação da rainha, 8 casas para esquerda
    printf("Rainha\n");
    moverRainha(rainha);

    // Separando a movimentação do Bispo com uma linha em branco
    printf("\n");

    // Movimentação do bispo, 5 casas na diagonal (cima e direita)
    printf("Bispo\n");
    moverBispo(bispo, 1); // O bispo se move 1 casa na horizontal a cada movimento

    // Separando a movimentação do Cavalo com uma linha em branco
    printf("\n");

    // Movimentação do Cavalo, 2 casas para cima e 1 casa para a direita
    moverCavalo();

    return 0;
}