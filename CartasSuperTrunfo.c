#include <stdio.h>

// Estrutura da carta
struct Carta {
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculos da carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos +
                         (1.0 / carta1.densidade) + carta1.pib_per_capita;

    // Cadastro da carta 2
    printf("\nCadastro da segunda carta:\n");
    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos da carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos +
                         (1.0 / carta2.densidade) + carta2.pib_per_capita;

    // Exibindo os dados e comparações
    printf("\n--- COMPARAÇÃO DAS CARTAS ---\n");

    // Atributos comuns
    printf("\nPopulação: %lu x %lu => Resultado: %d\n", carta1.populacao, carta2.populacao, carta1.populacao > carta2.populacao);
    printf("Área: %.2f x %.2f => Resultado: %d\n", carta1.area, carta2.area, carta1.area > carta2.area);
    printf("PIB: %.2f x %.2f => Resultado: %d\n", carta1.pib, carta2.pib, carta1.pib > carta2.pib);
    printf("Pontos turísticos: %d x %d => Resultado: %d\n", carta1.pontos_turisticos, carta2.pontos_turisticos, carta1.pontos_turisticos > carta2.pontos_turisticos);
    
    // Atributos derivados
    printf("Densidade Populacional: %.2f x %.2f => Resultado: %d\n", carta1.densidade, carta2.densidade, carta1.densidade < carta2.densidade);
    printf("PIB per Capita: %.6f x %.6f => Resultado: %d\n", carta1.pib_per_capita, carta2.pib_per_capita, carta1.pib_per_capita > carta2.pib_per_capita);
    
    // Super poder
    printf("Super Poder: %.6f x %.6f => Resultado: %d\n", carta1.super_poder, carta2.super_poder, carta1.super_poder > carta2.super_poder);

    return 0;
}


    

