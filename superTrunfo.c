#include <stdio.h>

int main() {
    char estado = "A";
    // char codigoDaCarta;
    char nomeDaCidade[20] = "default";
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int numeroPontosTuristicos = 0;

    printf("\n\n-=-=-=-Super Trunfo-=-=-=-\n\n");
    printf("Insira os dados de duas cartas do Super Trunfo\n");
    printf("Comecando pela primeira carta:\n");

    printf("- ESTADO: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%c", &estado);
    // printf("- CODIGO DA CARTA: A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03)\n");
    // scanf("%s", &codigoDaCarta);
    printf("- NOME DA CIDADE: \n");
    scanf("%s", &nomeDaCidade);
    printf("- POPULACAO: \n");
    scanf("%d", &populacao);
    printf("- AREA: A área da cidade em quilômetros quadrados\n");
    scanf("%f", &area);
    printf("- PIB: \n");
    scanf("%f", &pib);
    printf("- NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("\n-----\n");

    printf("Segunda carta:\n");

    printf("- ESTADO: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%c", &estado);
    // printf("- CODIGO DA CARTA: A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03)\n");
    // scanf("%s", &codigoDaCarta);
    printf("- NOME DA CIDADE: \n");
    scanf("%s", &nomeDaCidade);
    printf("- POPULACAO: \n");
    scanf("%d", &populacao);
    printf("- AREA: A área da cidade em quilômetros quadrados\n");
    scanf("%f", &area);
    printf("- PIB: \n");
    scanf("%f", &pib);
    printf("- NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("\n-----\n");
    printf("Carta 1: \nEstado: %c \nCodigo: %c01 \nNome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f \nNumero De Pontos Turisticos: %d", estado, estado, nomeDaCidade, populacao, area, pib, numeroPontosTuristicos);
    printf("\n-----\n");
    printf("Carta 2: \nEstado: %c \nCodigo: %c02 \nNome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f \nNumero De Pontos Turisticos: %d", estado, estado, nomeDaCidade, populacao, area, pib, numeroPontosTuristicos);
    printf("\n-----\n");

}