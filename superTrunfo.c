#include <stdio.h>

int main() {
    /*
        Primeira carta
    */
    char estado = "A";
    char nomeDaCidade[20] = "default";
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int numeroPontosTuristicos = 0;
    /*
        Segunda carta
    */
    char estado2[1] = "B";
    char nomeDaCidade2[20] = "default";
    int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int numeroPontosTuristicos2 = 0;

    printf("\n\n-=-=-=-Super Trunfo-=-=-=-\n\n");
    printf("Insira os dados de duas cartas do Super Trunfo\n");
    printf("Comecando pela primeira carta:\n");

    /*
        Obter dados primeira carta
    */
    printf("- ESTADO: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%c", &estado);
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
    /*
        Obter dados segunda carta
    */
    printf("Segunda carta:\n");
    printf("- ESTADO: Uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%s", &estado2);
    printf("- NOME DA CIDADE: \n");
    scanf("%s", &nomeDaCidade2);
    printf("- POPULACAO: \n");
    scanf("%d", &populacao2);
    printf("- AREA: A área da cidade em quilômetros quadrados\n");
    scanf("%f", &area2);
    printf("- PIB: \n");
    scanf("%f", &pib2);
    printf("- NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &numeroPontosTuristicos2);

    /*
        Mostar cartas
    */
    printf("\n-----\n");
    printf("Carta 1: \nEstado: %c \nCodigo: %c01 \nNome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f \nNumero De Pontos Turisticos: %d", estado, estado, nomeDaCidade, populacao, area, pib, numeroPontosTuristicos);
    printf("\n-----\n");
    printf("Carta 2: \nEstado: %s \nCodigo: %s02 \nNome da Cidade: %s \nPopulacao: %d \nArea: %f km² \nPIB: %f \nNumero De Pontos Turisticos: %d", estado2, estado2, nomeDaCidade2, populacao2, area2, pib2, numeroPontosTuristicos2);
    printf("\n-----\n");

}