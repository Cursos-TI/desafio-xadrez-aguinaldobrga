#include <stdio.h>

// Desafio: Movimentando as Peças do Xadrez (Nível Novato e Aventureiro)
// Este programa simula o movimento de quatro peças de xadrez:
// 1. Torre (for loop)
// 2. Bispo (while loop)
// 3. Rainha (do-while loop)
// 4. Cavalo (loops aninhados: for e while)

int main() {
    // REQUISITO FUNCIONAL: Variáveis e constantes do tipo inteiro
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;
    
    // Constantes para o Movimento do Cavalo (Nível Aventureiro)
    const int MOV_CAVALO_VERTICAL = 2;   // Duas casas para Baixo
    const int MOV_CAVALO_HORIZONTAL = 1; // Uma casa para a Esquerda
    
    // Variáveis de controle
    int i = 0;
    int j = 0;

    // ----------------------------------------------------------------------
    // 1. Movimentação da TORRE (Nível Novato)
    // Estrutura de Repetição: for
    // Movimento: 5 casas para a Direita
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento da TORRE (for loop)\n");
    printf("==========================================\n");
    
    for (i = 1; i <= MOV_TORRE; i++) {
        // Torre: move-se em linha reta.
        printf("Casa %d: Direita\n", i);
    }
    printf("Movimento da Torre finalizado.\n\n");
    
    // ----------------------------------------------------------------------
    // 2. Movimentação do BISPO (Nível Novato)
    // Estrutura de Repetição: while
    // Movimento: 5 casas na diagonal para Cima e Direita
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento do BISPO (while loop)\n");
    printf("==========================================\n");
    
    i = 0; // Reinicia o contador
    while (i < MOV_BISPO) {
        i++; // Incrementa o contador de casas
        // Bispo: move-se na diagonal (combinação de duas direções).
        printf("Casa %d: Cima, Direita\n", i);
    }
    printf("Movimento do Bispo finalizado.\n\n");

    // ----------------------------------------------------------------------
    // 3. Movimentação da RAINHA (Nível Novato)
    // Estrutura de Repetição: do-while
    // Movimento: 8 casas para a Esquerda
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento da RAINHA (do-while loop)\n");
    printf("==========================================\n");
    
    i = 0; // Reinicia o contador
    if (MOV_RAINHA > 0) {
        do {
            i++; // Incrementa o contador de casas
            // Rainha: move-se em todas as direções (simulando movimento para a esquerda).
            printf("Casa %d: Esquerda\n", i);
        } while (i < MOV_RAINHA);
    } else {
        printf("A Rainha nao se moveu.\n");
    }
    printf("Movimento da Rainha finalizado.\n\n");


    // ----------------------------------------------------------------------
    // 4. Movimentação do CAVALO (Nível Aventureiro)
    // Estrutura de Repetição: Loops Aninhados (for e while)
    // Movimento: 2 casas para Baixo, 1 casa para a Esquerda ("L")
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento do CAVALO (loops aninhados)\n");
    printf("==========================================\n");

    // Loop externo (obrigatoriamente 'for'): Simula as 2 casas verticais (Baixo).
    for (i = 1; i <= MOV_CAVALO_VERTICAL; i++) {
        // Etapa 1 e 2: Movimento vertical
        printf("Baixo\n"); 
        
        // Loop interno (while): Executa a etapa perpendicular na última iteração do 'for'.
        // Isso garante que o 'while' (loop 2) seja aninhado e execute a etapa 'Esquerda' 
        // *após* as duas etapas 'Baixo'.
        if (i == MOV_CAVALO_VERTICAL) {
            j = 0; // Reinicia o contador para o loop 'while'
            while (j < MOV_CAVALO_HORIZONTAL) {
                // Etapa 3: Movimento horizontal
                printf("Esquerda\n");
                j++; 
            }
        }
    }
    
    printf("\nMovimento do Cavalo finalizado.\n");

    return 0;
}