#include <stdio.h>

// Função recursiva para a Torre (move para a direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para a Rainha (move para a esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para o Bispo (move na diagonal cima-direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Versão com loops aninhados para o Bispo
void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo (usando loops aninhados):\n");

    for (int i = 1; i <= casas; i++) { // movimento vertical
        for (int j = 1; j <= 1; j++) { // movimento horizontal (1 por iteração)
            printf("Cima Direita\n");
        }
    }
}

// Movimento complexo do Cavalo (2 para cima, 1 para a direita)
void moverCavaloComplexo(int movimentos) {
    printf("\nMovimento do Cavalo (usando loops complexos):\n");

    for (int i = 0; i < movimentos; i++) {
        int passosVerticais = 0;

        for (int j = 0; j < 3; j++) {
            if (j == 2) {
                break;
            }

            printf("Cima\n");
            passosVerticais++;

            if (passosVerticais == 1) {
                continue;
            }
        }

        for (int k = 0; k < 1; k++) {
            printf("Direita\n");
        }
    }
}

// Função principal
int main() {
    // Quantidade de movimentos de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    // Torre com Recursividade
    printf("Movimento da Torre (usando recursividade):\n");
    moverTorre(casasTorre);

    // Bispo com Recursividade
    printf("\nMovimento do Bispo (usando recursividade):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo com Loops Aninhados
    moverBispoComLoops(casasBispo);

    // Rainha com Recursividade
    printf("\nMovimento da Rainha (usando recursividade):\n");
    moverRainha(casasRainha);

    // Cavalo com Loops Complexos
    moverCavaloComplexo(movimentosCavalo);

    return 0;
}
