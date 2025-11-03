#include <stdio.h>

// Definições de Constantes para o Movimento
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
// Constantes para o Movimento em 'L' do Cavalo (2 Cima, 1 Direita)
#define MOV_CAVALO_VERTICAL 2
#define MOV_CAVALO_HORIZONTAL 1

// ======================================================================
// FUNÇÕES RECURSIVAS (Substituem os loops simples)
// ======================================================================

/**
 * @brief Simula o movimento da TORRE (5 casas para a Direita) usando recursividade.
 * @param casas_restantes O número de casas que a Torre ainda deve mover.
 */
void moverTorreRecursivo(int casas_restantes) {
    // Caso Base: A recursão para quando não houver mais casas para mover.
    if (casas_restantes == 0) {
        return;
    }
    
    // Passo Recursivo: Chamada ANTES para imprimir na ordem crescente (Casa 1, Casa 2...)
    moverTorreRecursivo(casas_restantes - 1);
    
    // Imprime a direção (Direita)
    printf("Casa %d: Direita\n", casas_restantes);
}


/**
 * @brief Simula o movimento da RAINHA (8 casas para a Esquerda) usando recursividade.
 * @param casas_restantes O número de casas que a Rainha ainda deve mover.
 */
void moverRainhaRecursivo(int casas_restantes) {
    // Caso Base: A recursão para quando o movimento for concluído.
    if (casas_restantes <= 0) {
        return;
    }

    // Variável 'i' calcula o número da casa atual na ordem crescente (1 a 8)
    int i = MOV_RAINHA - casas_restantes + 1;

    // Passo Recursivo: Imprime o movimento da casa atual.
    printf("Casa %d: Esquerda\n", i);

    // Chamada Recursiva: Move para a próxima casa.
    moverRainhaRecursivo(casas_restantes - 1);
}


/**
 * @brief Simula o movimento do BISPO (5 casas na diagonal Cima/Direita) usando recursividade.
 * @param casas_restantes O número de casas que o Bispo ainda deve mover.
 */
void moverBispoRecursivo(int casas_restantes) {
    // Caso Base: A recursão para quando o movimento for concluído.
    if (casas_restantes <= 0) {
        return;
    }
    
    // Variável 'i' calcula o número da casa atual na ordem crescente (1 a 5)
    int i = MOV_BISPO - casas_restantes + 1;
    
    // Passo Recursivo: Imprime o movimento da casa atual.
    printf("Casa %d: Cima, Direita (Recursivo)\n", i);

    // Chamada Recursiva: Move para a próxima casa.
    moverBispoRecursivo(casas_restantes - 1);
}


// ======================================================================
// FUNÇÃO PRINCIPAL
// ======================================================================

int main() {
    int i, j; // Variáveis de controle para os loops aninhados

    // ----------------------------------------------------------------------
    // 1. Movimentação da TORRE (Nível Mestre: Recursividade)
    // Movimento: 5 casas para a Direita
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento da TORRE (Recursividade)\n");
    printf("==========================================\n");
    moverTorreRecursivo(MOV_TORRE);
    printf("Movimento da Torre finalizado.\n\n");
    
    // ----------------------------------------------------------------------
    // 2. Movimentação da RAINHA (Nível Mestre: Recursividade)
    // Movimento: 8 casas para a Esquerda
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento da RAINHA (Recursividade)\n");
    printf("==========================================\n");
    moverRainhaRecursivo(MOV_RAINHA);
    printf("Movimento da Rainha finalizado.\n\n");


    // ----------------------------------------------------------------------
    // 3A. Movimentação do BISPO (Nível Mestre: Recursividade)
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento do BISPO (Recursividade)\n");
    printf("==========================================\n");
    moverBispoRecursivo(MOV_BISPO);
    printf("Movimento do Bispo por Recursividade finalizado.\n\n");
    
    // 3B. Movimentação do BISPO (Nível Mestre: Loops Aninhados)
    // Movimento: 5 casas na diagonal para Cima e Direita
    // Loop Externo (Vertical: Cima), Loop Interno (Horizontal: Direita)
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento do BISPO (Loops Aninhados)\n");
    printf("==========================================\n");
    
    // Loop Externo: Controla o movimento vertical (Cima) em 5 passos
    for (i = 1; i <= MOV_BISPO; i++) {
        // Loop Interno: Controla o movimento horizontal (Direita) em 1 passo
        // Aninhamos um 'while' dentro do 'for'
        j = 1; // Inicializa a contagem para o passo horizontal (só precisa de 1)
        
        while (j <= 1) { 
            // Imprime o movimento diagonal (combinação de Cima/Direita)
            printf("Casa %d: Cima, Direita (Loops Aninhados)\n", i);
            j++;
        }
    }
    printf("Movimento do Bispo por Loops Aninhados finalizado.\n\n");


    // ----------------------------------------------------------------------
    // 4. Movimentação do CAVALO (Nível Mestre: Loops Aninhados Complexos)
    // Movimento: 2 casas para Cima, 1 casa para a Direita ("L")
    // Requisito: Usar 'continue' e 'break' e múltiplas variáveis.
    // ----------------------------------------------------------------------
    printf("==========================================\n");
    printf("Simulacao: Movimento do CAVALO (Loops Complexos)\n");
    printf("==========================================\n");
    
    // Loop Externo (FOR): Usado para iniciar o movimento (executa apenas 1 vez o 'L')
    // i = 1 (início), j = 1 (contador de casas horizontais)
    for (i = 1; i <= 1; i++) { 
        
        int casas_verticais_restantes = MOV_CAVALO_VERTICAL; // Inicia com 2
        
        // Loop Aninhado (WHILE): Simula as 2 casas verticais (Cima)
        while (casas_verticais_restantes > 0) {
            
            // Verifica se é o último passo vertical antes do 'break'
            if (casas_verticais_restantes == 1) {
                printf("Cima\n");
                
                // Usando 'break' para sair do loop vertical e iniciar o horizontal
                // Isso demonstra o controle de fluxo avançado.
                break; 
            }
            
            printf("Cima\n");
            casas_verticais_restantes--;
            
            // Usando 'continue' para garantir que o código após ele (se houvesse) 
            // não fosse executado nesta iteração, pulando para a próxima 'Cima'.
            continue; 
        }

        // Loop separado (mas controlado pela mesma lógica do Cavalo)
        // Simula a 1 casa horizontal (Direita)
        // Usamos um 'for' simples aqui para completar a simulação.
        for (int k = 0; k < MOV_CAVALO_HORIZONTAL; k++) {
            printf("Direita\n");
        }
    }

    printf("Movimento do Cavalo finalizado.\n");

    return 0;
}