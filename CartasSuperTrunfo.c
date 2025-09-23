#include <stdio.h>

int main()
{
  // Declarando variáveis para duas cartas
  char estado1[20], estado2[20];
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
  if (area1 > 0.0f)
    densidade1 = (float)populacao1 / area1;
  else
    densidade1 = 0.0f;

  if (populacao1 > 0UL)
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
  else
    pib_per_capita1 = 0.0f;

  // Cálculo dos indicadores para Carta 2
  if (area2 > 0.0f)
    densidade2 = (float)populacao2 / area2;
  else
    densidade2 = 0.0f;

  if (populacao2 > 0UL)
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
  else
    pib_per_capita2 = 0.0f;

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

  // Menu interativo para escolha de dois atributos de comparação
  int opcao1 = 0, opcao2 = 0;
  do
  {
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao1);
    if (opcao1 < 1 || opcao1 > 5)
      printf("Opção inválida! Tente novamente.\n");
  } while (opcao1 < 1 || opcao1 > 5);

  do
  {
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++)
    {
      if (i != opcao1)
      {
        switch (i)
        {
        case 1:
          printf("1 - População\n");
          break;
        case 2:
          printf("2 - Área\n");
          break;
        case 3:
          printf("3 - PIB\n");
          break;
        case 4:
          printf("4 - Número de pontos turísticos\n");
          break;
        case 5:
          printf("5 - Densidade demográfica\n");
          break;
        }
      }
    }
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao2);
    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5)
      printf("Opção inválida! Tente novamente.\n");
  } while (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5);

  // Comparação dos dois atributos
  int pontos_carta1 = 0, pontos_carta2 = 0;

  for (int i = 0; i < 2; i++)
  {
    int atributo_atual = (i == 0) ? opcao1 : opcao2;

    switch (atributo_atual)
    {
    case 1:
      // População
      if (populacao1 > populacao2)
        pontos_carta1++;
      else if (populacao2 > populacao1)
        pontos_carta2++;
      break;
    case 2:
      // Área
      if (area1 > area2)
        pontos_carta1++;
      else if (area2 > area1)
        pontos_carta2++;
      break;
    case 3:
      // PIB
      if (pib1 > pib2)
        pontos_carta1++;
      else if (pib2 > pib1)
        pontos_carta2++;
      break;
    case 4:
      // Pontos turísticos
      if (pontos_turisticos1 > pontos_turisticos2)
        pontos_carta1++;
      else if (pontos_turisticos2 > pontos_turisticos1)
        pontos_carta2++;
      break;
    case 5:
      // Densidade demográfica (menor vence)
      if (densidade1 < densidade2)
        pontos_carta1++;
      else if (densidade2 < densidade1)
        pontos_carta2++;
      break;
    default:
      printf("\nAtributo inválido!\n");
      break;
    }
  }

  // Soma dos atributos e determinação do vencedor
  float soma_carta1 = 0, soma_carta2 = 0;
  soma_carta1 += (opcao1 == 1) ? populacao1 : (opcao1 == 2) ? area1
                                          : (opcao1 == 3)   ? pib1
                                          : (opcao1 == 4)   ? pontos_turisticos1
                                                            : densidade1;
  soma_carta1 += (opcao2 == 1) ? populacao1 : (opcao2 == 2) ? area1
                                          : (opcao2 == 3)   ? pib1
                                          : (opcao2 == 4)   ? pontos_turisticos1
                                                            : densidade1;

  soma_carta2 += (opcao1 == 1) ? populacao2 : (opcao1 == 2) ? area2
                                          : (opcao1 == 3)   ? pib2
                                          : (opcao1 == 4)   ? pontos_turisticos2
                                                            : densidade2;
  soma_carta2 += (opcao2 == 1) ? populacao2 : (opcao2 == 2) ? area2
                                          : (opcao2 == 3)   ? pib2
                                          : (opcao2 == 4)   ? pontos_turisticos2
                                                            : densidade2;

  printf("\n******** Resultado ********\n");
  printf("Carta 1 - %s (%s): %.2f pontos\n", nome1, estado1, soma_carta1);
  printf("Carta 2 - %s (%s): %.2f pontos\n", nome2, estado2, soma_carta2);

  if (soma_carta1 > soma_carta2)
  {
    printf("\nVencedor: Carta 1 (%s)\n", nome1);
  }
  else if (soma_carta2 > soma_carta1)
  {
    printf("\nVencedor: Carta 2 (%s)\n", nome2);
  }
  else
  {
    printf("\nResultado: Empate!\n");
  }

  // Exibição clara dos atributos escolhidos e seus valores
  printf("\nAtributos escolhidos:\n");
  for (int i = 0; i < 2; i++)
  {
    int atributo = (i == 0) ? opcao1 : opcao2;
    switch (atributo)
    {
    case 1:
      printf("População: %lu (Carta 1), %lu (Carta 2)\n", populacao1, populacao2);
      break;
    case 2:
      printf("Área: %.2f (Carta 1), %.2f (Carta 2)\n", area1, area2);
      break;
    case 3:
      printf("PIB: %.2f (Carta 1), %.2f (Carta 2)\n", pib1, pib2);
      break;
    case 4:
      printf("Pontos turísticos: %d (Carta 1), %d (Carta 2)\n", pontos_turisticos1, pontos_turisticos2);
      break;
    case 5:
      printf("Densidade demográfica: %.2f (Carta 1), %.2f (Carta 2)\n", densidade1, densidade2);
      break;
    default:
      printf("Atributo inválido!\n");
      break;
    }
  }

  printf("\n******** FIM ********\n");

  return 0;
}
