#include <stdio.h>
int main(){

    //definição das variáveis das cartas 1 e 2
char estado1[50], estado2[50];
char cod_carta1[50], cod_carta2[50];
char cidade1[50], cidade2[50];
unsigned long int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int ponto_turistico1, ponto_turistico2;
float densidade_populacional1, densidade_populacional2;
float pib_per_capita1, pib_per_capita2;
float super_poder1, super_poder2;

//recolhendo os dados da carta 1
printf("carta 1\n");

printf("digite o nome do estado: \n");
scanf("%s", estado1);

printf("digite o código da carta: \n");
scanf("%s", cod_carta1);

printf("digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("digite o tamanho da popuplação: \n");
scanf("%lu", &populacao1);

printf("digite a área em km2: \n");
scanf("%f", &area1);

printf("digite o valor do PIB: \n");
scanf("%f", &pib1);

printf("digite a quantidade de pontos turísticos: \n");
scanf("%d", &ponto_turistico1);

//mostrando os dados escolhidos pelo usuário da carta 1
printf("Informações da carta 1: \n");

printf("estado: %s\n", estado1);
printf("código carta: %s\n", cod_carta1);
printf("cidade: %s\n", cidade1);
printf("populção: %lu\n", populacao1);
printf("área: %.2f km2\n",area1);
printf("pib: %.2f\n", pib1);
printf("pontos turísticos: %d\n", ponto_turistico1);
//cálculo da densidade populacional e pib per capita da carta 1
densidade_populacional1 = (float) populacao1 / area1;
printf("densidade populacional: %.2f hab/km2\n", densidade_populacional1);
pib_per_capita1 = (float) pib1 / populacao1;
printf("pib per capita: %.3f reais\n", pib_per_capita1);
super_poder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + (1 / densidade_populacional1) + pib_per_capita1;
printf("o super poder da carta 1 tem o valor de: %.2f\n", super_poder1);

//recolhendo os dados da carta 2
printf("carta 2\n");

printf("digite o nome do estado: \n");
scanf("%s", estado2);

printf("digite o código da carta: \n");
scanf("%s", cod_carta2);

printf("digite o nome da cidade: \n");
scanf("%s", cidade2);

printf("digite o tamanho da popuplação: \n");
scanf("%lu", &populacao2);

printf("digite a área em km2: \n");
scanf("%f", &area2);

printf("digite o valor do PIB: \n");
scanf("%f", &pib2);

printf("digite a quantidade de pontos turísticos: \n");
scanf("%d", &ponto_turistico2);
////mostrando os dados escolhidos pelo usuário da carta 2
printf("Informações da carta 2: \n");

printf("estado: %s\n", estado2);
printf("código carta: %s\n", cod_carta2);
printf("cidade: %s\n", cidade2);
printf("populção: %lu\n", populacao2);
printf("área: %.2f km2\n",area2);
printf("pib: %.2f\n", pib2);
printf("pontos turísticos: %d\n", ponto_turistico2);
//cálculo da densidade populacional e pib per capita da carta 2
densidade_populacional2 = (float) populacao2 / area2;
printf("densidade populacional: %.2f hab/km2\n", densidade_populacional2);
pib_per_capita2 = (float) pib2 / populacao2;
printf("pib per capita: %.3f reais\n", pib_per_capita2);
super_poder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + (1 / densidade_populacional2) + pib_per_capita2;
printf("o super poder da carta 2 tem o valor de: %.2f\n", super_poder2);

// comparação das cartas
printf("Comparação dos atributo das Cartas\n");

printf("a população da carta1 (%lu) é maior que a população da carta 2 (%lu): %d\n", populacao1, populacao2, populacao1 > populacao2);
printf("a área da carta1 (%.2f) é maior que a área da carta 2 (%.2f): %d\n", area1, area2, area1 > area2);
printf("o pib da carta1 (%.2f) é maior que o pib da carta 2 (%.2f): %d\n", pib1, pib2, pib1 > pib2);
printf("a quantidade de pontos turísticos da carta1 (%d) é maior que a quantidade de pontos turísticos da carta 2 (%d): %d\n", ponto_turistico1, ponto_turistico2, ponto_turistico1 > ponto_turistico2);
printf("a densidade populacional da carta1 (%.2f) é menor que a densidade populacional da carta 2 (%.2f): %d\n", densidade_populacional1, densidade_populacional2, densidade_populacional1 < densidade_populacional2);
printf("o pib per capita da carta1 (%.3f) é maior que o pib per capita da carta 2 (%.3f): %d\n", pib_per_capita1, pib_per_capita2, pib_per_capita1 > pib_per_capita2);
printf("o super poder da carta1 (%.2f) é maior que o super poder da carta 2 (%.2f): %d\n", super_poder1, super_poder2, super_poder1 > super_poder2);


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

    

