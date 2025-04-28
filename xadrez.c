#include <stdio.h>

int movimentoBispo(int n) {
    if (n == 0) return 0;
    printf("Cima\n");
    printf("Direita\n");
    return movimentoBispo(n - 1);
}

int movimentoTorre(int n) {
    if (n == 0) return 0;
    printf("Direita\n");
    return movimentoTorre(n - 1);
}

int movimentoRainha(int n) {
    if (n == 0) return 0;
    printf("Esquerda\n");
    return movimentoRainha(n - 1);
}

void movimentoCavalo() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Esquerda\n");
        }
    }
}

int main() {
    int movimentacaoBispo = 5, movimentacaoTorre = 5, movimentacaoRainha = 8;

    printf("Movimento do Bispo\n");
    movimentoBispo(movimentacaoBispo);
    printf("\n");

    printf("Movimento da Torre\n");
    movimentoTorre(movimentacaoTorre);
    printf("\n");

    printf("Movimento da Rainha\n");
    movimentoRainha(movimentacaoRainha);
    printf("\n");

    printf("Movimento do Cavalo\n");
    movimentoCavalo();
    printf("\n");

    return 0;
}
