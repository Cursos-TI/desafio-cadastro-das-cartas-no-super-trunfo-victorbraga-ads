#include <stdio.h>

int main()
{
    char estado1[15], codigo1[4], cidade1[20], estado2[15], codigo2[4], cidade2[20];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    float densidade_pop1, pib_per_capita1, densidade_pop2, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf(" %[^\n]", estado1);
    printf("Codigo (ex: A01): ");
    scanf(" %[^\n]", codigo1);
    printf("Cidade (ex: Sao Paulo): ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km): ");
    scanf("%f", &area1);
    printf("PIB (em reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf(" %[^\n]", estado2);
    printf("Codigo (ex: B02): ");
    scanf(" %[^\n]", codigo2);
    printf("Cidade (ex: Rio de Janeiro): ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km): ");
    scanf("%f", &area2);
    printf("PIB (em reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_pop1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    super_poder1 = (1 / densidade_pop1) + pib_per_capita1 + populacao1 + area1 + pib1 + pontos_turisticos1;
    super_poder2 = (1 / densidade_pop2) + pib_per_capita2 + populacao2 + area2 + pib2 + pontos_turisticos2;

    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km\nPIB: R$ %.2f\nPontos turisticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km\nPIB per Capita: R$ %.2f\n", densidade_pop1, pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km\nPIB: R$ %.2f\nPontos turisticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km\nPIB per Capita: R$ %.2f\n", densidade_pop2, pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\nComparacao:\n");
    printf("Estado: %d\n", estado1[0] > estado2[0]);
    printf("Codigo: %d\n", codigo1[0] > codigo2[0]);
    printf("Cidade: %d\n", cidade1[0] > cidade2[0]);
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: %d\n", densidade_pop1 < densidade_pop2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return 0;
}