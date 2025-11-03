#include <stdio.h>

// Definições de Constantes para o Movimento
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8

/**
 * @brief Programa principal que simula o movimento de três peças de xadrez, 
 * utilizando uma estrutura de repetição diferente para cada peça 
 * (for, while, do-while), conforme o Requisito Funcional.
 */
int main() {
    // Variáveis de controle para os loops
    int contador_while = 0;
    int contador_do_while = 0;

    // ======================================================================
    // 1. Movimentação da TORRE (Usando o Loop 'for')
    // Movimento: 5 casas para a Direita
    // Tipo: Horizontal ou Vertical (Reto)
    // ======================================================================
    printf("==========================================\n");
    printf("Simulacao: Movimento da TORRE (Loop FOR)\n");
    printf("==========================================\n");

    // O loop 'for' é ideal para repetições com número fixo e conhecido de iterações.
    for (int i = 1; i <= MOV_TORRE; i++) {
        // A Torre se move reto, neste caso, para a Direita a cada casa.
        printf("Casa %d: Direita\n", i);
    }
    printf("Movimento da Torre finalizado em %d casas.\n\n", MOV_TORRE);

    // ----------------------------------------------------------------------
    // 2. Movimentação do BISPO (Usando o Loop 'while')
    // Movimento: 5 casas na diagonal para Cima e Direita
    // Tipo: Diagonal (Combinação de 2 direções)
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento do BISPO (Loop WHILE)\n");
    printf("==========================================\n");
    
    // O loop 'while' é usado para repetir um bloco de código enquanto uma condição é verdadeira.
    // Usamos um contador (contador_while) que deve ser incrementado manualmente no corpo.
    while (contador_while < MOV_BISPO) {
        contador_while++; // Começamos a contar da Casa 1
        
        // O Bispo se move na diagonal. Simulação: Cima e Direita simultaneamente.
        printf("Casa %d: Cima, Direita\n", contador_while);
    }
    printf("Movimento do Bispo finalizado em %d casas.\n\n", MOV_BISPO);

    // ----------------------------------------------------------------------
    // 3. Movimentação da RAINHA (Usando o Loop 'do-while')
    // Movimento: 8 casas para a Esquerda
    // Tipo: Todas as direções (Simulação: Reto para a Esquerda)
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento da RAINHA (Loop DO-WHILE)\n");
    printf("==========================================\n");
    
    // O loop 'do-while' garante que o corpo do loop seja executado pelo menos uma vez, 
    // e a condição é verificada apenas após a primeira execução.
    do {
        contador_do_while++; // Começamos a contar da Casa 1
        
        // A Rainha se move reto, neste caso, para a Esquerda a cada casa.
        printf("Casa %d: Esquerda\n", contador_do_while);
        
    } while (contador_do_while < MOV_RAINHA);
    printf("Movimento da Rainha finalizado em %d casas.\n\n", MOV_RAINHA);

    return 0;
}