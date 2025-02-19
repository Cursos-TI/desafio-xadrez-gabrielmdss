#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i;

    // Nível Novato - Movimentação das Peças
    // printf("Cima\n"); printf("Baixo\n"); printf("Esquerda\n"); printf("Direita\n");
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentacaoBispo = 5, movimentacaoTorre = 5, movimentacaoRainha = 8;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo\n");
    for(i=0; i < movimentacaoBispo; i++){
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Implementação de Movimentação da Torre\n");
    for(i=0; i < movimentacaoTorre; i++){
        printf("Direita\n");
    }
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Implementação de Movimentação da Torre\n");
    for(i=0; i < movimentacaoTorre; i++){
        printf("Esquerda\n");
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
