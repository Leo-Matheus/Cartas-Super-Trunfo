#include <stdio.h>

int main()
{
    char estado1, estado2; // Letra de 'A' a 'H' (representando um dos oito estados).
    char codigo1[4], codigo2[4]; // Letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char cidade1[20], cidade2[20]; // Nome da cidade.
    int populacao1, populacao2; // Número de habitantes da cidade.
    float area1, area2; // Área da cidade em quilômetros quadrados.
    float pib1, pib2; // Produto Interno Bruto da cidade em bilhões de reais.
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2; // Quantidade de pontos turísticos na cidade.

    // Bloco que recebe as informações da carta 1.
    printf("---INSIRA AS INFORMAÇÕES DA CARTA 1---\n");
    printf("Digite o Estado(uma letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta(letra do Estado mais um número de 01 a 04): \n");
    scanf("%3s", codigo1);

    printf("Digite a Cidade(sem espaços): \n");
    scanf("%19s", cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB(em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    // Bloco que recebe as informações da carta 2.
    printf("---INSIRA AS INFORMAÇÕES DA CARTA 2---\n");
    printf("Digite o Estado(uma letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta(letra do Estado mais um número de 01 a 04): \n");
    scanf("%3s", codigo2);

    printf("Digite a Cidade(sem espaços): \n");
    scanf("%19s", cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB(em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    // Bloco que imprime a carta 1.
    printf("-----Carta 1-----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos1);

    // Bloco que imprime a carta 2.
    printf("-----Carta 2-----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos2);

}
