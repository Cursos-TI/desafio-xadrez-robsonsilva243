#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Definindo o numero de casa a serem movidas para cada pecas
    const int torre = 5;
    const int rainha = 8;
    const int bispo = 5;
    const int cavaloBaixo = 2; // O Cavalo se move 2 casas para baixo
    const int cavaloEsquerda = 1; // O Cavalo se move 1 casa para a esquerda

    //Menu Interativo
    printf("Xadrez\n");
    printf("--------\n");

    //movimentacao da torre, 5 casas para direita
    printf("Torre\n");
    for (int i = 0; i < torre; i++)
    {
        printf("Direita\n");
    }

    //movimentacao da rainha, 8 casas para esquerda
    printf("Rainha\n");
    int j = 0;
    while (j < rainha)
    {
        printf("esquerda\n");
        j++;
    }

    //movimentacao do bispo, 5 casas na diagonal ( cima e direita)
    printf("Bispo\n");
    int k = 0;
    do
    {
        printf("cima, direta\n");
        k++;
    } while (k < bispo);

    // Separando a movimentação do Cavalo com uma linha em branco
    printf("\n");

    // Movimentação do Cavalo, 2 casas para baixo e 1 casa para a esquerda
    printf("Cavalo\n");
    for (int i = 0; i < cavaloBaixo; i++) {
        printf("Baixo\n");
    }

    // Usando um loop while para simular o movimento para a esquerda
    int l = 0;
    while (l < cavaloEsquerda) {
        printf("Esquerda\n");
        l++;
    }
    



    return 0;
}

