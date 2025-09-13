#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro: Cálculo de Atributos

int main() {
    // Declaração de variáveis para a Carta 1
    int card1_populacao;
    float card1_area, card1_pib;
    int card1_pontos_turisticos;
    float card1_densidade, card1_pib_per_capita; // Novos atributos

    // Declaração de variáveis para a Carta 2
    int card2_populacao;
    float card2_area, card2_pib;
    int card2_pontos_turisticos;
    float card2_densidade, card2_pib_per_capita; // Novos atributos

    // --- CADASTRO DAS CARTAS ---
    printf("Cadastro da Carta 1:\n");
    printf("Digite a populacao (int): ");
    scanf("%d", &card1_populacao);
    printf("Digite a area (float): ");
    scanf("%f", &card1_area);
    printf("Digite o PIB (float): ");
    scanf("%f", &card1_pib);
    printf("Digite o numero de pontos turisticos (int): ");
    scanf("%d", &card1_pontos_turisticos);
    printf("\n");

    printf("Cadastro da Carta 2:\n");
    printf("Digite a populacao (int): ");
    scanf("%d", &card2_populacao);
    printf("Digite a area (float): ");
    scanf("%f", &card2_area);
    printf("Digite o PIB (float): ");
    scanf("%f", &card2_pib);
    printf("Digite o numero de pontos turisticos (int): ");
    scanf("%d", &card2_pontos_turisticos);
    printf("\n");
    
    // --- CÁLCULO DOS NOVOS ATRIBUTOS ---
    card1_densidade = card1_populacao / card1_area;
    card1_pib_per_capita = card1_pib / card1_populacao;
    
    card2_densidade = card2_populacao / card2_area;
    card2_pib_per_capita = card2_pib / card2_populacao;

    // --- EXIBIÇÃO DOS DADOS (INCLUINDO OS CALCULADOS) ---
    printf("=== Dados das Cartas Cadastradas ===\n");
    printf("\n--- Carta 1 ---\n");
    printf("Populacao: %d\n", card1_populacao);
    printf("Area: %.2f\n", card1_area);
    printf("PIB: %.2f\n", card1_pib);
    printf("Pontos turisticos: %d\n", card1_pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", card1_densidade);
    printf("PIB per Capita: %.2f\n", card1_pib_per_capita);

    printf("\n--- Carta 2 ---\n");
    printf("Populacao: %d\n", card2_populacao);
    printf("Area: %.2f\n", card2_area);
    printf("PIB: %.2f\n", card2_pib);
    printf("Pontos turisticos: %d\n", card2_pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", card2_densidade);
    printf("PIB per Capita: %.2f\n", card2_pib_per_capita);

    return 0;
}
