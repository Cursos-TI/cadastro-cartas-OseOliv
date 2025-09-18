#include <stdio.h>

int main() {
    // Declarando variáveis para 32 cartas
    char estado;
    char codigo[4];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade, pib_per_capita;

    printf("Cadastro de Cartas Super Trunfo - Países\n");
    printf("-------------------------------------\n");

    for (int i = 0; i < 8; i++) { // 8 estados
        for (int j = 1; j <= 4; j++) { // 4 cidades por estado
            printf("\nInserindo dados da Carta %c%02d\n", 'A' + i, j);

            estado = 'A' + i;
            printf("Estado: %c\n", estado);

            sprintf(codigo, "%c%02d", estado, j);
            printf("Código: %s\n", codigo);

            printf("Insira o nome da cidade: ");
            scanf("%s", nome);

            printf("Insira a população: ");
            scanf("%d", &populacao);

            printf("Insira a área (km²): ");
            scanf("%f", &area);

            printf("Insira o PIB (em bilhões): ");
            scanf("%f", &pib);

            printf("Insira a quantidade de pontos turísticos: ");
            scanf("%d", &pontos_turisticos);

            densidade = populacao / area;
            pib_per_capita = (pib * 1000000000) / populacao;

            printf("\n******** Carta %s ********\n", codigo);
            printf("Estado: %c\n", estado);
            printf("Código: %s\n", codigo);
            printf("Cidade: %s\n", nome);
            printf("População: %d habitantes\n", populacao);
            printf("Área: %.2f km²\n", area);
            printf("PIB: R$ %.2f bilhões\n", pib);
            printf("Pontos turísticos: %d\n", pontos_turisticos);
            printf("Densidade populacional: %.2f hab/km²\n", densidade);
            printf("PIB per capita: R$ %.2f\n", pib_per_capita);
            printf("***************************\n");
        }
    }

    printf("\n******** FIM ********\n");

    return 0;
}
