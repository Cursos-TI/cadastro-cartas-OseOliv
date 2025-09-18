#include <stdio.h>

int main() {
    char estado;
    char codigo[4];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Cadastro de Cartas Super Trunfo - Países\n");
    printf("-------------------------------------\n");

    for (int i = 0; i < 8; i++) { // 8 estados
        for (int j = 1; j <= 4; j++) { // 4 cidades por estado
            printf("\nInserindo dados da Carta %c%02d\n", 'A' + i, j);

            estado = 'A' + i;
            printf("Estado: %c\n", estado);

            sprintf(codigo, "%c%02d", estado, j);
            printf("Código: %s\n", codigo);

            printf("Nome da cidade: ");
            scanf("%s", nome);

            printf("População: ");
            scanf("%d", &populacao);

            printf("Área (km²): ");
            scanf("%f", &area);

            printf("PIB: ");
            scanf("%f", &pib);

            printf("Quantidade de pontos turísticos: ");
            scanf("%d", &pontos_turisticos);

            printf("\n******** Carta %s ********\n", codigo);
            printf("Estado: %c\n", estado);
            printf("Código: %s\n", codigo);
            printf("Cidade: %s\n", nome);
            printf("População: %d habitantes\n", populacao);
            printf("Área: %.2f km²\n", area);
            printf("PIB: R$ %.2f bilhões\n", pib);
            printf("Pontos turísticos: %d\n", pontos_turisticos);
            printf("***************************\n");
        }
    }

    printf("\n******** FIM ********\n");

    return 0;
}
