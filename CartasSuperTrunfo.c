#include <stdio.h>

int Carta1()
{
    // Variáveis para armazenar valores da carta 1
    char estado[50];
    char cod_carta[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int ponto_turistico;

    // Exibe informações para o usuário preencher corretamente as variáveis
    printf("Carta 1 \n");
    
    printf("Digite o nome do Estado: ");
    scanf("%s", estado);

    printf("Digite o código da Carta: ");
    scanf("%s", cod_carta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao);

    printf("Digite a área em km2: ");
    scanf("%f", &area);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos Turísticos: ");
    scanf("%d", &ponto_turistico);

    // Exibe as informações coletadas
    printf("\nInformações da Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", ponto_turistico);

    return 0;
}

int Carta2()
{
    // Variáveis para armazenar valores da carta 2
    char estado[50];
    char cod_carta[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int ponto_turistico;

    // Exibe informações para o usuário preencher corretamente as variáveis
    printf("Carta 2 \n");

    printf("Digite o nome do Estado: ");
    scanf("%s", estado);

    printf("Digite o código da Carta: ");
    scanf("%s", cod_carta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao);

    printf("Digite a área em km2: ");
    scanf("%f", &area);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos Turísticos: ");
    scanf("%d", &ponto_turistico);

    // Exibe as informações coletadas
    printf("\nInformações da Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", ponto_turistico);

    return 0;
}

int main()
{
    Carta1();
    Carta2();

    return 0;
}


    
    
    
    







// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    

