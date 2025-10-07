#include <stdio.h>

int main() {

    // Simulação da Torre

    // A torre se move 5 casas para a direita
    // Estrutura de repetição:FOR

    int casasTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++){
        printf("Direita\n");
    }
    
    // Simulação do Bispo

    // O Bispo se move 5 casas na diagonal para cima e à direita
    // Estrutura de repetição: WHILE

    int casasBispo = 5;
    int i = 1;

    printf("\nMovimento do Bispo:\n");

    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Simulação da Rainha

    //A Rainha se move 8 casa para a esquerda
    // Estrutura de repetição: DO-WHILE

    int casasRainha = 8;
    int j = 1;

    printf("\nMovimento da Rainha:\n");

    do{
        printf("Esquerda\n");
        j++;

    } while (j <= casasRainha);

    // Simulação do Cavalo
 
    // Cavalo se move 2 casas para baixo e 1 casa para a esquerda
    // Cada movimento em L será repetido 3 vezes, por exemplo

    int movimentosCavalo = 3; // número de vezes que o cavalo fará o "L"

    printf("\nMovimento do Cavalo:\n");

    for (int k = 1; k <= movimentosCavalo; k++) {
        int passo = 1;

        // Loop while para as duas casas para baixo
        while (passo <= 2) {
            printf("Baixo\n");
            passo++;
        }

        // Movimento para a esquerda
        printf("Esquerda\n");
    }
    
    return 0;
}
