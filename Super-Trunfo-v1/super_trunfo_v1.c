#include <stdio.h>

int main()
{
    char estado1, estado2; // Letra de 'A' a 'H' (representando um dos oito estados).
    char codigo1[4], codigo2[4]; // Letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char cidade1[20], cidade2[20]; // Nome da cidade.
    unsigned long int populacao1, populacao2; // Número de habitantes da cidade.
    float area1, area2; // Área da cidade em quilômetros quadrados.
    float pib1, pib2; // Produto Interno Bruto da cidade em bilhões de reais.
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2; // Quantidade de pontos turísticos na cidade.
    float densidadePopulacional1, densidadePopulacional2; // Densidade populacional da cidade.
    float pibPerCapita1, pibPerCapita2; // Produto Interno Bruto per Capita da cidade.
    float superPoder1, superPoder2; // Soma de todos os atributos, subtraída pela densidade populacional.
    
    // Bloco que recebe as informações da carta 1.
    printf("---INSIRA AS INFORMAÇÕES DA CARTA 1---\n");
    printf("Digite o Estado(uma letra de A a H): \n");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta(letra do Estado mais um número de 01 a 04): \n");
    scanf("%3s", codigo1);
    
    printf("Digite a Cidade(sem espaços): \n");
    scanf("%19s", cidade1);
    
    printf("Digite a População: \n");
    scanf("%lu", &populacao1);
    
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
    scanf("%lu", &populacao2);
    
    printf("Digite a Área(em km²): \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB(em bilhões de reais): \n");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);
    
    // Cálculo da Densidade Populacional.
    densidadePopulacional1 = (float)populacao1 / area1;
    densidadePopulacional2 = (float)populacao2 / area2;
    // Cálculo do PIB per Capita(convertido para bilhões de reais).
    pibPerCapita1 = (float)(pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (float)(pib2 * 1000000000) / populacao2;
    // Cálculo do Super Poder.
    superPoder1 = (float)populacao1 + area1 + pib1 + numeroDePontosTuristicos1 - densidadePopulacional1 + pibPerCapita1;
    superPoder2 = (float)populacao2 + area2 + pib2 + numeroDePontosTuristicos2 - densidadePopulacional2 + pibPerCapita2;
    
    // Bloco que imprime a carta 1.
    printf("-----Carta 1-----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    // Bloco que imprime a carta 2.
    printf("-----Carta 2-----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Bloco que verifica se há carta vencedora ou empate em cada atributo.
    printf("-----Comparação de Cartas(1 = SIM e 0 = NÃO)-----\n");
    printf("População: Carta 1 vence? %d. Carta 2 vence? %d\n", populacao1 > populacao2, populacao1 < populacao2);
    printf("Área: Carta 1 vence? %d. Carta 2 vence? %d\n", area1 > area2, area1 < area2);
    printf("PIB: Carta 1 vence? %d. Carta 2 vence? %d\n", pib1 > pib2, pib1 < pib2);
    printf("Número de Pontos Turísticos: Carta 1 vence? %d. Carta 2 vence? %d\n", numeroDePontosTuristicos1 > numeroDePontosTuristicos2, numeroDePontosTuristicos1 < numeroDePontosTuristicos2);
    printf("Densidade Populacional: Carta 1 vence? %d. Carta 2 vence? %d\n", densidadePopulacional1 > densidadePopulacional2, densidadePopulacional1 < densidadePopulacional2);
    printf("Densidade Populacional: Carta 1 vence? %d. Carta 2 vence? %d\n", densidadePopulacional1 < densidadePopulacional2, densidadePopulacional1 > densidadePopulacional2); // Vence a MENOR densidade populacional.
    printf("PIB per Capita: Carta 1 vence? %d. Carta 2 vence? %d\n", pibPerCapita1 > pibPerCapita2, pibPerCapita1 < pibPerCapita2);
    printf("Super Poder: Carta 1 vence? %d. Carta 2 vence? %d\n", superPoder1 > superPoder2, superPoder1 < superPoder2);
}
