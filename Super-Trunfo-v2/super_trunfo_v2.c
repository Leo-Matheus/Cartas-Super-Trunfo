#include <stdio.h>

int main(){
    char estado1, estado2; // Letra de 'A' a 'H'(representando um dos oito estados).
    char codigo1[4], codigo2[4]; // Letra do estado seguida de um número de 01 a 04(ex: A01, B03).
    char cidade1[20], cidade2[20]; // Nome da cidade.
    unsigned long int populacao1, populacao2; // Número de habitantes da cidade.
    float area1, area2; // Área da cidade em quilômetros quadrados.
    float pib1, pib2; // Produto Interno Bruto da cidade em bilhões de reais.
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2; // Quantidade de pontos turísticos na cidade.
    float densidadePopulacional1, densidadePopulacional2; // Densidade populacional da cidade.
    float pibPerCapita1, pibPerCapita2; // Produto Interno Bruto per Capita da cidade.
    float superPoder1, superPoder2; // Soma de todos os atributos, subtraída pela densidade populacional.
    int escolhaDeAtributo1, escolhaDeAtributo2; // Armazena a escolha dos atributos nos menus.

    printf("-_-_-_-_-_SUPER TRUNFO_-_-_-_-_-\n");
    // Bloco que recebe as informações da carta 1.
    printf("#####INSIRA AS INFORMAÇÕES DA CARTA 1#####\n");
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
    printf("#######################################\n");

    // Bloco que recebe as informações da carta 2.
    printf("#####INSIRA AS INFORMAÇÕES DA CARTA 2#####\n");
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
    printf("#######################################\n");

    // Cálculo da Densidade Populacional.
    densidadePopulacional1 = (float)populacao1 / area1;
    densidadePopulacional2 = (float)populacao2 / area2;
    //Cálculo do PIB per Capita(convertido para bilhões de reais).
    pibPerCapita1 = (float)(pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (float)(pib2 * 1000000000) / populacao2;

    // Bloco que imprime a carta 1.
    printf("---------CARTA 1---------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("-------------------------\n");

    // Bloco que imprime a carta 2.
    printf("---------CARTA 2---------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("-------------------------\n");

    // Menu de escolha do primeiro atributo para comparação.
    printf("*****COMPARAÇÃO DE ATRIBUTOS*****\n");
    printf("Escolha o primeiro atributo para comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolhaDeAtributo1);

    // Bloco que verifica e exibe se há carta vencedora ou empate no atributo escolhido.
    switch (escolhaDeAtributo1)
    {
    case 1:
        printf("População - %s: %lu\n", cidade1, populacao1);
        printf("População - %s: %lu\n", cidade2, populacao2);

        if (populacao1 > populacao2){
            printf("%s vence!\n", cidade1);
        } else if (populacao1 < populacao2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Área - %s: %.2f km²\n", cidade1, area1);
        printf("Área - %s: %.2f km²\n", cidade2, area2);

        if (area1 > area2){
            printf("%s vence!\n", cidade1);
        } else if (area1 < area2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("PIB - %s: %.2f bilhões de reais\n", cidade1, pib1);
        printf("PIB - %s: %.2f bilhões de reais\n", cidade2, pib2);

        if (pib1 > pib2){
            printf("%s vence!\n", cidade1);
        } else if (pib1 < pib2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Número de Pontos Turísticos - %s: %d\n", cidade1, numeroDePontosTuristicos1);
        printf("Número de Pontos Turísticos - %s: %d\n", cidade2, numeroDePontosTuristicos2);

        if (numeroDePontosTuristicos1 > numeroDePontosTuristicos2){
            printf("%s vence!\n", cidade1);
        } else if (numeroDePontosTuristicos1 < numeroDePontosTuristicos2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Densidade Populacional - %s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
        printf("Densidade Populacional - %s: %.2f hab/km²\n", cidade2, densidadePopulacional2);

        // Vence a carta com MENOR densidade populacional.
        if (densidadePopulacional1 < densidadePopulacional2){
            printf("%s vence!\n", cidade1);
        } else if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    default:
        printf("!!!!!Opção Inválida!!!!!\n");
        break;
    }
    printf("*************************************\n");

    // Menu de escolha do segundo atributo para comparação.
    printf("Escolha o segundo atributo para comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolhaDeAtributo2);

    // Verifica se o usuário escolheu o mesmo atributo 2 vezes.
    if (escolhaDeAtributo1 == escolhaDeAtributo2 && (escolhaDeAtributo2 >= 1 && escolhaDeAtributo2 <= 5)){ 
        printf("!!!!!Não é possível comparar o mesmo atributo duas vezes!!!!!\n");
        escolhaDeAtributo2 = 0;
    }

    // Bloco que verifica e exibe se há carta vencedora ou empate no atributo escolhido.
    switch (escolhaDeAtributo2)
    {
    case 1:
        printf("População - %s: %lu\n", cidade1, populacao1);
        printf("População - %s: %lu\n", cidade2, populacao2);

        if (populacao1 > populacao2){
            printf("%s vence!\n", cidade1);
        } else if (populacao1 < populacao2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Área - %s: %.2f km²\n", cidade1, area1);
        printf("Área - %s: %.2f km²\n", cidade2, area2);

        if (area1 > area2){
            printf("%s vence!\n", cidade1);
        } else if (area1 < area2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("PIB - %s: %.2f bilhões de reais\n", cidade1, pib1);
        printf("PIB - %s: %.2f bilhões de reais\n", cidade2, pib2);

        if (pib1 > pib2){
            printf("%s vence!\n", cidade1);
        } else if (pib1 < pib2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Número de Pontos Turísticos - %s: %d\n", cidade1, numeroDePontosTuristicos1);
        printf("Número de Pontos Turísticos - %s: %d\n", cidade2, numeroDePontosTuristicos2);

        if (numeroDePontosTuristicos1 > numeroDePontosTuristicos2){
            printf("%s vence!\n", cidade1);
        } else if (numeroDePontosTuristicos1 < numeroDePontosTuristicos2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Densidade Populacional - %s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
        printf("Densidade Populacional - %s: %.2f hab/km²\n", cidade2, densidadePopulacional2);

        // Vence a carta com MENOR densidade populacional.
        if (densidadePopulacional1 < densidadePopulacional2){
            printf("%s vence!\n", cidade1);
        } else if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("%s vence!\n", cidade2);
        } else
        {
            printf("Empate!\n");
        }
        break;
    default:
        printf("!!!!!Opção Inválida!!!!!\n");
        break;
    }
    printf("*************************************\n");

    //Cálculo do Super Poder(Soma de todos os atributos, subtraída pela Densidade Populacional).
    superPoder1 = (float)populacao1 + area1 + pib1 + numeroDePontosTuristicos1 - densidadePopulacional1 + pibPerCapita1;
    superPoder2 = (float)populacao2 + area2 + pib2 + numeroDePontosTuristicos2 - densidadePopulacional2 + pibPerCapita2;

    // Bloco que exibe a comparação dos Super Poderes.
    printf("~~~~~~~~SUPER PODER(SOMA DOS ATRIBUTOS)~~~~~~~~\n");
    printf("Super Poder - %s: %.2f\n", cidade1, superPoder1);
    printf("Super Poder - %s: %.2f\n", cidade2, superPoder2);

    if (superPoder1 > superPoder2){
        printf("%s vence!\n", cidade1);
    } else if (superPoder1 < superPoder2)
    {
        printf("%s vence!\n", cidade2);
    } else
    {
        printf("Empate!\n");
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");	
}
