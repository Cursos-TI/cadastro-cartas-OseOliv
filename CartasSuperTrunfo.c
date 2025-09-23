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

  // Menu interativo para escolha do atributo de comparação
  int opcao;
  printf("\nEscolha o atributo para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("6 - Nome do país (apenas exibe informações)\n");
  printf("Digite o número da opção desejada: ");
  scanf("%d", &opcao);

  int carta_vencedora = 0; 
  switch (opcao) {
    case 1:
      // População
      if (populacao1 > populacao2) {
        carta_vencedora = 1;
      } else if (populacao2 > populacao1) {
        carta_vencedora = 2;
      } else {
        carta_vencedora = 0;
      }
      break;
    case 2:
      // Área
      if (area1 > area2) {
        carta_vencedora = 1;
      } else if (area2 > area1) {
        carta_vencedora = 2;
      } else {
        carta_vencedora = 0;
      }
      break;
    case 3:
      // PIB
      if (pib1 > pib2) {
        carta_vencedora = 1;
      } else if (pib2 > pib1) {
        carta_vencedora = 2;
      } else {
        carta_vencedora = 0;
      }
      break;
    case 4:
      // Pontos turísticos
      if (pontos_turisticos1 > pontos_turisticos2) {
        carta_vencedora = 1;
      } else if (pontos_turisticos2 > pontos_turisticos1) {
        carta_vencedora = 2;
      } else {
        carta_vencedora = 0;
      }
      break;
    case 5:
      // Densidade demográfica (menor vence)
      if (densidade1 < densidade2) {
        carta_vencedora = 1;
      } else if (densidade2 < densidade1) {
        carta_vencedora = 2;
      } else {
        carta_vencedora = 0;
      }
      break;
    case 6:
      carta_vencedora = -1;
      break;
    default:
      printf("\nOpção inválida!\n");
      carta_vencedora = -2;
      break;
  }

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

  // Exibição do resultado da comparação
  printf("\nComparação de cartas:\n");
  printf("Carta 1 - %s (%s)\n", nome1, estado1);
  printf("Carta 2 - %s (%s)\n", nome2, estado2);

  if (carta_vencedora == 1) {
    if (opcao == 1) printf("População: %lu x %lu\n", populacao1, populacao2);
    else if (opcao == 2) printf("Área: %.2f x %.2f km²\n", area1, area2);
    else if (opcao == 3) printf("PIB: %.2f x %.2f bilhões\n", pib1, pib2);
    else if (opcao == 4) printf("Pontos turísticos: %d x %d\n", pontos_turisticos1, pontos_turisticos2);
    else if (opcao == 5) printf("Densidade demográfica: %.2f x %.2f hab/km²\n", densidade1, densidade2);
    printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
  } else if (carta_vencedora == 2) {
    if (opcao == 1) printf("População: %lu x %lu\n", populacao1, populacao2);
    else if (opcao == 2) printf("Área: %.2f x %.2f km²\n", area1, area2);
    else if (opcao == 3) printf("PIB: %.2f x %.2f bilhões\n", pib1, pib2);
    else if (opcao == 4) printf("Pontos turísticos: %d x %d\n", pontos_turisticos1, pontos_turisticos2);
    else if (opcao == 5) printf("Densidade demográfica: %.2f x %.2f hab/km²\n", densidade1, densidade2);
    printf("\nResultado: Carta 2 (%s) venceu!\n", nome2);
  } else if (carta_vencedora == 0) {
    if (opcao == 1) printf("População: %lu x %lu\n", populacao1, populacao2);
    else if (opcao == 2) printf("Área: %.2f x %.2f km²\n", area1, area2);
    else if (opcao == 3) printf("PIB: %.2f x %.2f bilhões\n", pib1, pib2);
    else if (opcao == 4) printf("Pontos turísticos: %d x %d\n", pontos_turisticos1, pontos_turisticos2);
    else if (opcao == 5) printf("Densidade demográfica: %.2f x %.2f hab/km²\n", densidade1, densidade2);
    printf("\nResultado: Empate!\n");
  } else if (carta_vencedora == -1) {
    printf("Carta 1: %s (%s)\n", nome1, estado1);
    printf("Carta 2: %s (%s)\n", nome2, estado2);
  } else {
    printf("\nNenhuma comparação realizada.\n");
  }
  
  printf("\n******** FIM ********\n");

  return 0;
}
