#include <stdio.h>

// Desafio: Movimentando as Peças do Xadrez (Nível Novato)

int main() {
    
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;
    
    // Variável de controle para as estruturas de repetição
    int i = 0;

    
    printf("==========================================\n");
    printf("Simulacao: Movimento da TORRE (for loop)\n");
    printf("==========================================\n");
    
    // A Torre move-se horizontalmente ou verticalmente.
    // Simulação de 5 movimentos 'Direita'.
    for (i = 1; i <= MOV_TORRE; i++) {
        printf("Casa %d: Direita\n", i);
    }
    
    printf("Movimento da Torre finalizado.\n\n");
    
    
    printf("==========================================\n");
    printf("Simulacao: Movimento do BISPO (while loop)\n");
    printf("==========================================\n");
    
    // O Bispo move-se na diagonal (combinação de duas direções).
    // Inicializa a variável de controle para o loop 'while'.
    i = 0; 
    
    // Simulação de 5 movimentos 'Cima Direita'.
    while (i < MOV_BISPO) {
        i++; 
        printf("Casa %d: Cima, Direita\n", i);
    }
    
    printf("Movimento do Bispo finalizado.\n\n");

    
    printf("==========================================\n");
    printf("Simulacao: Movimento da RAINHA (do-while loop)\n");
    printf("==========================================\n");
    
    
    i = 0; 
    
    
    if (MOV_RAINHA > 0) {
        do {
            i++; 
            printf("Casa %d: Esquerda\n", i);
        } while (i < MOV_RAINHA);
    } else {
        printf("A Rainha nao se moveu.\n");
    }
    
    printf("Movimento da Rainha finalizado.\n");

    return 0;
}