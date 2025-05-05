#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, estado2;
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[20], nomeCidade2[20];
    int populacao,populacao2, numPontosTuristicos, numPontosTuristicos2;
    float area, area2, pib, pib2;

    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Informe o Estado:\n");
    scanf("%c", &estado);

    printf("Informe o código da carta:\n");
    scanf("%s",&codigoCarta);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &nomeCidade);

    printf("Informe o nº de cidadãos da cidade:\n");
    scanf("%d", &populacao);

    
    printf("Informe a área da cidade:\n");
    scanf("%f", &area);

    
    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pib);

    
    printf("Informe o nº de pontos turísticos da cidade:\n");
    scanf("%d", &numPontosTuristicos);

    printf("Fim da primeira carta!\n");
    
    printf("Informe o segundo Estado:\n");
    scanf("%c", &estado2);

    printf("Informe o código da segunda carta:\n");
    scanf("%s",&codigoCarta2);

    printf("Informe o nome da segunda cidade:\n");
    scanf("%s", &nomeCidade2);

    printf("Informe o nº de cidadãos da segunda cidade:\n");
    scanf("%d", &populacao2);

    
    printf("Informe a área da segunda cidade:\n");
    scanf("%f", &area2);

    
    printf("Informe o PIB da segunda cidade:\n");
    scanf("%f", &pib2);

    
    printf("Informe o nº de pontos turísticos da segunda cidade:\n");
    scanf("%d", &numPontosTuristicos2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("|----------------------------|");
    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População %d\n", populacao);
    printf("Área da cidade: %.2f Quilometros Quadrados\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Nº de pontos turísticos: %d\n", numPontosTuristicos);

    printf("|----------------------------|");
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População %d\n", populacao2);
    printf("Área da cidade: %.2f Quilometros Quadrados\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Nº de pontos turísticos: %d\n", numPontosTuristicos2);
    printf("|----------------------------|");
    
    return 0;
}
