#include <stdio.h>
#include <string.h>

int main() {
    char codigo1[4], codigo2[4], codigo3[4], codigo4[4];
    char nome1[50], nome2[50], nome3[50], nome4[50];
    int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int pontos_turisticos1, pontos_turisticos2, pontos_turisticos3, pontos_turisticos4;

    printf("Cadastro de Cartas Super Trunfo - Países\n");
    printf("-------------------------------------\n");

    printf("Cadastro da carta A01\n");
    strcpy(codigo1, "A01");
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km2): ");
    scanf("%f", &area1);
    printf("PIB (milhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Cadastro da carta A02\n");
    strcpy(codigo2, "A02");
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km2): ");
    scanf("%f", &area2);
    printf("PIB (milhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Cadastro da carta A03\n");
    strcpy(codigo3, "A03");
    printf("Nome da cidade: ");
    scanf("%s", nome3);
    printf("População: ");
    scanf("%d", &populacao3);
    printf("Área (km2): ");
    scanf("%f", &area3);
    printf("PIB (milhões): ");
    scanf("%f", &pib3);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos3);

    printf("Cadastro da carta A04\n");
    strcpy(codigo4, "A04");
    printf("Nome da cidade: ");
    scanf("%s", nome4);
    printf("População: ");
    scanf("%d", &populacao4);
    printf("Área (km2): ");
    scanf("%f", &area4);
    printf("PIB (milhões): ");
    scanf("%f", &pib4);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos4);

    printf("\n\nCartas cadastradas:\n");
    printf("-------------------\n");

    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("-------------------\n");

    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("-------------------\n");

    printf("Código: %s\n", codigo3);
    printf("Cidade: %s\n", nome3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km2\n", area3);
    printf("PIB: %.2f milhões\n", pib3);
    printf("Pontos turísticos: %d\n", pontos_turisticos3);
    printf("-------------------\n");

    printf("Código: %s\n", codigo4);
    printf("Cidade: %s\n", nome4);
    printf("População: %d\n", populacao4);
    printf("Área: %.2f km2\n", area4);
    printf("PIB: %.2f milhões\n", pib4);
    printf("Pontos turísticos: %d\n", pontos_turisticos4);
    printf("-------------------\n");

    return 0;
}
