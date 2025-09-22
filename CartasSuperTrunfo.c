#include <stdio.h>

int main()
{
  // Declarando variáveis para duas cartas
  char estado1[3], estado2[3];
  char codigo1[4], codigo2[4];
  char nome1[20], nome2[20];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;
  float densidade1, densidade2;
  float pib_per_capita1, pib_per_capita2;
  float super_poder1, super_poder2;

  // Entrada de dados para a Carta 1
  printf("Inserindo dados da Carta 01\n");
  printf("Digite o Estado: ");
  scanf("%s", estado1);
  printf("Insira o código da carta:\n");
  scanf("%s", codigo1);
  printf("\nInsira o nome da cidade:\n");
  scanf("%s", nome1);
  printf("Insira a população: ");
  scanf("%lu", &populacao1);
  printf("Insira a área (km²): ");
  scanf("%f", &area1);
  printf("Insira o PIB (em bilhões): ");
  scanf("%f", &pib1);
  printf("Insira a quantidade de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Entrada de dados para a Carta 2
  printf("\nInserindo dados da Carta 02\n");
  printf("Digite o Estado: ");
  scanf("%s", estado2);
  printf("Insira o código da carta:\n");
  scanf("%s", codigo2);
  printf("\nInsira o nome da cidade:\n");
  scanf("%s", nome2);
  printf("Insira a população: ");
  scanf("%lu", &populacao2);
  printf("Insira a área (km²): ");
  scanf("%f", &area2);
  printf("Insira o PIB (em bilhões): ");
  scanf("%f", &pib2);
  printf("Insira a quantidade de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Cálculo dos indicadores para Carta 1
  densidade1 = (float)populacao1 / area1;
  pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;
  super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

  // Exibição dos dados da Carta 1
  printf("\n******** Carta 01 ********\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  // Cálculo dos indicadores para Carta 2
  densidade2 = (float)populacao2 / area2;
  pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;
  super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

  // Comparação dos atributos
  int v_populacao = (populacao1 > populacao2);
  int v_area = (area1 > area2);
  int v_pib = (pib1 > pib2);
  int v_pontos = (pontos_turisticos1 > pontos_turisticos2);
  int v_densidade = (densidade1 < densidade2);
  int v_pib_per_capita = (pib_per_capita1 > pib_per_capita2);
  int v_super_poder = (super_poder1 > super_poder2);

  // Exibição dos dados da Carta 2
  printf("\n******** Carta 02 ********\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  // Exibição dos resultados das comparações
  printf("\nComparação de Cartas:\n");
  printf("População: Carta %d venceu (%d)\n", v_populacao ? 1 : 2, v_populacao);
  printf("Área: Carta %d venceu (%d)\n", v_area ? 1 : 2, v_area);
  printf("PIB: Carta %d venceu (%d)\n", v_pib ? 1 : 2, v_pib);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", v_pontos ? 1 : 2, v_pontos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", v_densidade ? 1 : 2, v_densidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", v_pib_per_capita ? 1 : 2, v_pib_per_capita);
  printf("Super Poder: Carta %d venceu (%d)\n", v_super_poder ? 1 : 2, v_super_poder);

  printf("\n******** FIM ********\n");

  return 0;
}
