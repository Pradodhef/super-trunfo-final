#include <stdio.h>

int main() {
    // Variáveis da primeira cidade
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Variáveis da segunda cidade
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Leitura da primeira cidade
    printf("Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira cidade
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    printf("\n");

    // Leitura da segunda cidade
    printf("Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da segunda cidade
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    printf("\n");

    // Exibindo os resultados
    
     printf("*** Carta 1 *** :\n");
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");
    printf("*** Carta 2 ***:\n");
   
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    printf("\n");

    int escolha1;
    int escolha2;
    // Menu simples
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (vence o MENOR)\n");
    printf("Opção: ");
    scanf("%d", &escolha1);
     
    printf("\n");
    
    
     printf("Escolha o segundo atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (vence o MENOR)\n");
    printf("Opção: ");
    scanf("%d", &escolha2);
    switch (escolha1) {
    case 1:
        printf("População:\n");
        printf("%s: %d\n", cidade1, populacao1);
        printf("%s: %d\n", cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Vencedor: %s\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Área:\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);
        if (area1 > area2)
            printf("Vencedor: %s\n", cidade1);
        else if (area2 > area1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("PIB:\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);
        if (pib1 > pib2)
            printf("Vencedor: %s\n", cidade1);
        else if (pib2 > pib1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Pontos Turísticos:\n");
        printf("%s: %d\n", cidade1, pontosTuristicos1);
        printf("%s: %d\n", cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Vencedor: %s\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Densidade Demográfica:\n");
        printf("%s: %.2f\n", cidade1, densidade1);
        printf("%s: %.2f\n", cidade2, densidade2);
        if (densidade1 < densidade2) // menor é o vencedor
            printf("Vencedor: %s\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida!\n");
}
printf("\n");
switch (escolha2) {
    case 1:
        printf("População:\n");
        printf("%s: %d\n", cidade1, populacao1);
        printf("%s: %d\n", cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Vencedor: %s\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Área:\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);
        if (area1 > area2)
            printf("Vencedor: %s\n", cidade1);
        else if (area2 > area1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("PIB:\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);
        if (pib1 > pib2)
            printf("Vencedor: %s\n", cidade1);
        else if (pib2 > pib1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Pontos Turísticos:\n");
        printf("%s: %d\n", cidade1, pontosTuristicos1);
        printf("%s: %d\n", cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Vencedor: %s\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Densidade Demográfica:\n");
        printf("%s: %.2f\n", cidade1, densidade1);
        printf("%s: %.2f\n", cidade2, densidade2);
        if (densidade1 < densidade2) // menor é o vencedor
            printf("Vencedor: %s\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Vencedor: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida!\n");
}
    return 0;
}