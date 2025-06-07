#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Definindo constantes para o número de casas que cada peça pode se mover
    const int casasTorre = 5; 
    const int casasBispo = 5;  
    const int casasRainha = 8; 

    // Implementação de Movimentação da Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); 
    }

    // Implementação de Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < casasBispo; i++) {
        printf("Cima, Direita\n"); 
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    for (int i = 0; i < casasRainha; i++) {
        printf("Esquerda\n"); 
    }

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    int movimentosCavalo[8][2] = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };

    // Simulando a movimentação do Cavalo a partir da posição inicial (0, 0)
    for (int i = 0; i < 8; i++) {
        int novaLinha = 0 + movimentosCavalo[i][0]; 
        int novaColuna = 0 + movimentosCavalo[i][1]; 
        
        // Verifica se a nova posição está dentro dos limites do tabuleiro (0 a 7)
        if (novaLinha >= 0 && novaLinha < 8 && novaColuna >= 0 && novaColuna < 8) {
            printf("Cavalo se move para: (%d, %d)\n", novaLinha, novaColuna);
        } else {
            printf("Movimento inválido para: (%d, %d)\n", novaLinha, novaColuna);
        }
    }

    return 0;
}
