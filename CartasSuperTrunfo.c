#include <stdio.h>
    
int main(){

    printf("Carta 1 \n");
    char Estado[15];
    char codigo_da_carta[3];
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Digite o nome do estado: \n");
    scanf("%s", Estado);
    
    printf("Digite o código da carta: \n");
    scanf(" %s", codigo_da_carta);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    
    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área em km2: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    //exibe as informações coletadas

    printf("Informações da Carta 1: \n");
    printf("Estado: %s \n", Estado);
    printf("Código da carta: %s \n", codigo_da_carta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", &populacao);
    printf("Area em km2: %f \n", &area);
    printf("PIB: %f \n", &pib);
    printf("Pontos turísticos: %d \n", &pontos_turisticos);

    
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

    

