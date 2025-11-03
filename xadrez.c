#include <stdio.h>

// Definições de Constantes para o Movimento das Peças
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
// Constantes para o Movimento do Cavalo
#define MOV_CAVALO_VERTICAL 2 // Duas casas na direção vertical (Baixo)
#define MOV_CAVALO_HORIZONTAL 1 // Uma casa na direção horizontal (Esquerda)

/**
 * @brief Programa principal que simula o movimento das peças de xadrez:
 * Torre (for), Bispo (while), Rainha (do-while) e Cavalo (loops aninhados).
 */
int main() {
    // Variáveis de controle para os loops
    int contador_while = 0;
    int contador_do_while = 0;

    // ======================================================================
    // MOVIMENTAÇÃO NÍVEL NOVATO (Manutenção)
    // ======================================================================

    // 1. Movimentação da TORRE (Loop 'for') - 5 casas para a Direita
    printf("==========================================\n");
    printf("Simulacao: Movimento da TORRE (Loop FOR)\n");
    printf("==========================================\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("Movimento da Torre finalizado em %d casas.\n\n", MOV_TORRE);

    // 2. Movimentação do BISPO (Loop 'while') - 5 casas na diagonal Cima, Direita
    printf("==========================================\n");
    printf("Simulacao: Movimento do BISPO (Loop WHILE)\n");
    printf("==========================================\n");
    while (contador_while < MOV_BISPO) {
        contador_while++;
        printf("Casa %d: Cima, Direita\n", contador_while);
    }
    printf("Movimento do Bispo finalizado em %d casas.\n\n", MOV_BISPO);

    // 3. Movimentação da RAINHA (Loop 'do-while') - 8 casas para a Esquerda
    printf("==========================================\n");
    printf("Simulacao: Movimento da RAINHA (Loop DO-WHILE)\n");
    printf("==========================================\n");
    do {
        contador_do_while++;
        printf("Casa %d: Esquerda\n", contador_do_while);
    } while (contador_do_while < MOV_RAINHA);
    printf("Movimento da Rainha finalizado em %d casas.\n\n", MOV_RAINHA);


    // ======================================================================
    // 4. Movimentação do CAVALO (Loops Aninhados: FOR e WHILE)
    // Movimento: 2 casas para BAIXO, 1 casa para a ESQUERDA (Forma de "L")
    // ======================================================================
    printf("==========================================\n");
    printf("Simulacao: Movimento do CAVALO (Loops Aninhados)\n");
    printf("==========================================\n");
    
    // Variável para controlar o loop interno (while)
    int casas_verticais_cont = 0;
    
    // Loop Externo (FOR): Simula a parte vertical do 'L' (2 casas para Baixo).
    // O Cavalo se move 2 casas em uma direção. Usamos o 'for' para isso.
    for (int i = 1; i <= MOV_CAVALO_VERTICAL; i++) {
        // Imprime a direção vertical a cada iteração
        printf("Baixo\n"); 
        
        // Neste ponto, o primeiro 'Baixo' já foi feito (i=1).
        // A próxima iteração do 'for' fará o segundo 'Baixo'.
    }
    
    // Loop Interno (WHILE): Simula a parte perpendicular do 'L' (1 casa para a Esquerda).
    // Este loop é executado UMA VEZ após o loop 'for' ter concluído suas 2 iterações.
    // Ele está "aninhado" na lógica de execução do Cavalo, mesmo que fisicamente venha depois
    // do 'for', pois ele simula a segunda parte do movimento 'L'.
    while (casas_verticais_cont < MOV_CAVALO_HORIZONTAL) {
        // A lógica do 'L' só requer 1 passo na direção perpendicular (horizontal)
        printf("Esquerda\n");
        
        // Incrementa para garantir que o loop só execute uma vez (1 casa para a Esquerda)
        casas_verticais_cont++; 
    }
    
    printf("Movimento do Cavalo finalizado.\n");

    return 0;
}