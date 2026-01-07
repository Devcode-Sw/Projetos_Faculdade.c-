#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    int opcao1;

    // Variáveis Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    int opcao2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade1 = populacao1 / area1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;

    // Comparando só população
    if (populacao1 > populacao2) {
        printf("\nCarta vencedora: %s\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nCarta vencedora: %s\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    printf("\n1 - Populacao\n2 - Area\n3 - PIB\n4 - Densidade\n");
    scanf("%d", &opcao1);

    if (opcao1 == 1) {
        if (populacao1 > populacao2) printf("Venceu: %s\n", cidade1);
        else if (populacao2 > populacao1) printf("Venceu: %s\n", cidade2);
        else printf("Empate!\n");
    } else if (opcao1 == 2) {
        if (area1 > area2) printf("Venceu: %s\n", cidade1);
        else if (area2 > area1) printf("Venceu: %s\n", cidade2);
        else printf("Empate!\n");
    } else if (opcao1 == 3) {
        if (pib1 > pib2) printf("Venceu: %s\n", cidade1);
        else if (pib2 > pib1) printf("Venceu: %s\n", cidade2);
        else printf("Empate!\n");
    } else if (opcao1 == 4) {
        if (densidade1 < densidade2) printf("Venceu: %s\n", cidade1);
        else if (densidade2 < densidade1) printf("Venceu: %s\n", cidade2);
        else printf("Empate!\n");
    } else {
        printf("Opcao invalida\n");
    }

    int pontosCarta1 = 0, pontosCarta2 = 0;

    printf("\nEscolha 2 atributos (1-Populacao, 2-Area, 3-PIB, 4-Densidade)\n");
    scanf("%d", &opcao1);
    scanf("%d", &opcao2);

    // Primeiro atributo
    if (opcao1 == 1) {
        if (populacao1 > populacao2) pontosCarta1++;
        else if (populacao2 > populacao1) pontosCarta2++;
    } else if (opcao1 == 2) {
        if (area1 > area2) pontosCarta1++;
        else if (area2 > area1) pontosCarta2++;
    } else if (opcao1 == 3) {
        if (pib1 > pib2) pontosCarta1++;
        else if (pib2 > pib1) pontosCarta2++;
    } else if (opcao1 == 4) {
        if (densidade1 < densidade2) pontosCarta1++;
        else if (densidade2 < densidade1) pontosCarta2++;
    }

    // Segundo atributo
    if (opcao2 == 1) {
        if (populacao1 > populacao2) pontosCarta1++;
        else if (populacao2 > populacao1) pontosCarta2++;
    } else if (opcao2 == 2) {
        if (area1 > area2) pontosCarta1++;
        else if (area2 > area1) pontosCarta2++;
    } else if (opcao2 == 3) {
        if (pib1 > pib2) pontosCarta1++;
        else if (pib2 > pib1) pontosCarta2++;
    } else if (opcao2 == 4) {
        if (densidade1 < densidade2) pontosCarta1++;
        else if (densidade2 < densidade1) pontosCarta2++;
    }

    if (pontosCarta1 > pontosCarta2) {
        printf("Carta vencedora: %s\n", cidade1);
    } else if (pontosCarta2 > pontosCarta1) {
        printf("Carta vencedora: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
