// declarações de bibliotecas que serão usadas
#include <stdio.h>
#include <string.h>

int main()
{
    // criação de variáveis para recebimento de informações
    char estado1;
    char estado2;
    char codigoDaCarta1[10];
    char codigoDaCarta2[10];
    char nomeDaCidade1[50];
    char nomeDaCidade2[50];
    int populacao1, populacao2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;
    float area1, area2;
    float pib1, pib2;

    // instruções para a digitação do usuário(printf) e a leitura dos dados fornecidos(scanf)
    printf("Digite o Estado da carta 1:\n");
    scanf(" %c", &estado1);
    printf("Digite o Estado da carta 2:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 1:\n");
    scanf(" %s", codigoDaCarta1);
    printf("Digite o código da carta 2:\n");
    scanf(" %s", codigoDaCarta2);

    // limpeza de buffer para o melhor funcionamento da função fgets
    getchar();

    // instruções para a digitação do usuário(printf), leitura dos dados fornecidos(scanf) e de informações do tipo string que podem conter espaços em branco(fgets)
    printf("Digite o nome da cidade 1:\n");
    fgets(nomeDaCidade1, 50, stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0'; // processo para remover a quebra de linha automática que o fgets possui
    printf("Digite o nome da cidade 2:\n");
    fgets(nomeDaCidade2, 50, stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0'; // processo para remover a quebra de linha automática que o fgets possui

    printf("Digite a população da cidade 1:\n");
    scanf(" %d", &populacao1);
    printf("Digite a população da cidade 2:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade 1:\n");
    scanf(" %f", &area1);
    printf("Digite a área da cidade 2:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade 1:\n");
    scanf(" %f", &pib1);
    printf("Digite o PIB da cidade 2:\n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 1:\n");
    scanf(" %d", &numeroPontosTuristicos1);
    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf(" %d", &numeroPontosTuristicos2);

    // Impressão na tela dos dados obtidos
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", numeroPontosTuristicos1);

    // Impressão na tela dos dados obtidos
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", numeroPontosTuristicos2);

    // método para finalizar o programa
    return 0;
}