#include <stdio.h>

int main() {
    // Declarando variáveis para duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados para a Carta 1
    printf("Inserindo dados da Carta 01\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    printf("Insira o código da carta: ");
    scanf("%s", codigo1);
    printf("Insira o nome da cidade: ");
    scanf("%s", nome1);
    printf("Insira a população: ");
    scanf("%d", &populacao1);
    printf("Insira a área (km²): ");
    scanf("%f", &area1);
    printf("Insira o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a Carta 2
    printf("\nInserindo dados da Carta 02\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    printf("Insira o código da carta: ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", nome2);
    printf("Insira a população: ");
    scanf("%d", &populacao2);
    printf("Insira a área (km²): ");
    scanf("%f", &area2);
    printf("Insira o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da Carta 1
    printf("\n******** Carta 01 ********\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da Carta 2
    printf("\n******** Carta 02 ********\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    printf("\n******** FIM ********\n");

    return 0;
}
