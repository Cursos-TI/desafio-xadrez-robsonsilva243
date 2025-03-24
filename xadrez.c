#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    //Definindo o numero de casa a serem movidas para cada pecas
    const int torre = 5;
    const int rainha = 8;
    const int bispo = 5;

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
    



    return 0;
}

