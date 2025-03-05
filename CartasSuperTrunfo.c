#include <stdio.h>

int main()
{
    char estado1[15], codigo1[4], cidade1[20], estado2[15], codigo2[4], cidade2[20];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf(" %[^\n]", estado1);
    printf("Codigo (ex: A01): ");
    scanf(" %[^\n]", codigo1);
    printf("Cidade (ex: Sao Paulo): ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
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
    scanf("%d", &populacao2);
    printf("Area (km): ");
    scanf("%f", &area2);
    printf("PIB (em reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km\nPIB: R$ %.2f\nPontos turisticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km\nPIB: R$ %.2f\nPontos turisticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}