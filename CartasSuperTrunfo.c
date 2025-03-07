#include <stdio.h>
int main(){

    //definição das variáveis das cartas 1 e 2
char pais1[50], pais2[50];
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
int comparacao;

//recolhendo os dados da carta 1
printf("carta 1\n");

printf("digite o nome do país: \n");
scanf("%s", pais1);

printf("digite o nome do estado: \n");
scanf("%s", estado1);

printf("digite o código da carta: \n");
scanf("%s", cod_carta1);

printf("digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("digite o tamanho da população: \n");
scanf("%lu", &populacao1);

printf("digite a área em km2: \n");
scanf("%f", &area1);

printf("digite o valor do PIB: \n");
scanf("%f", &pib1);

printf("digite a quantidade de pontos turísticos: \n");
scanf("%d", &ponto_turistico1);

//mostrando os dados escolhidos pelo usuário da carta 1
printf("Informações da carta 1: \n");

printf("país: %s\n", pais1);
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

printf("digite o nome do país: \n");
scanf("%s", pais2);

printf("digite o nome do estado: \n");
scanf("%s", estado2);

printf("digite o código da carta: \n");
scanf("%s", cod_carta2);

printf("digite o nome da cidade: \n");
scanf("%s", cidade2);

printf("digite o tamanho da população: \n");
scanf("%lu", &populacao2);

printf("digite a área em km2: \n");
scanf("%f", &area2);

printf("digite o valor do PIB: \n");
scanf("%f", &pib2);

printf("digite a quantidade de pontos turísticos: \n");
scanf("%d", &ponto_turistico2);
////mostrando os dados escolhidos pelo usuário da carta 2
printf("Informações da carta 2: \n");

printf("país: %s\n", pais2);
printf("estado: %s\n", estado2);
printf("código carta: %s\n", cod_carta2);
printf("cidade: %s\n", cidade2);
printf("população: %lu\n", populacao2);
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

//comparação e resultado da comparação
printf("Comparação das cartas (Atributo: PIB per Capita)\n");

printf("Carta 1 %s: %.3f reais\n", cidade1, pib_per_capita1);
printf("Carta 2 %s: %.3f reais\n", cidade2, pib_per_capita2);

if(pib_per_capita1 > pib_per_capita2){
    printf("O PIB per capita da carta 1 é maior\n");
}else {
    printf("O PIB per capita da carta 2 é maior\n");
}
if(pib_per_capita1 > pib_per_capita2){
    printf("Carta 1, %s venceu!\n", cidade1);
}else {
    printf("Carta 2, %s venceu!\n", cidade2);
}

printf("COMPARAÇÃO DE ATRIBUTOS\n");
printf("Escolha um atributo para comparar: \n");
printf("1. População\n");
printf("2. Área em km2\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capita\n");
printf("Escolha: ");
scanf("%d", &comparacao);

switch(comparacao){
case 1:
        printf("Carta 1:\nPaís: %s\nPopulação: %lu\n", pais1, populacao1);
        printf("Carta 2:\nPaís: %s\nPopulação: %lu\n", pais2, populacao2);
    if(populacao1 == populacao2){
        printf("Empate\n");
    }else if(populacao1 > populacao2){
        printf("A Carta 1 venceu a Carta 2!\n");
    }else{
        printf("A Carta 2 venceu a Carta 1!\n");
    }
break;
case 2:
        printf("Carta 1:\nPaís: %s\nÁrea: %.2f km2\n", pais1, area1);
        printf("Carta 2:\nPaís: %s\nÁrea: %.2f km2\n", pais2, area2);
    if(area1 == area2){
        printf("Empate\n");
    }else if(area1 > area2){
        printf("A Carta 1 venceu a Carta 2!\n");
    }else{
        printf("A Carta 2 venceu a Carta 1!\n");
    }
break;
case 3:
        printf("Carta 1:\nPaís: %s\nPIB: %.2f\n", pais1, pib1);
        printf("Carta 2:\nPaís: %s\nPIB: %.2f\n", pais2, pib2);
    if(pib1 == pib2){
        printf("Empate\n");
    }else if(pib1 > pib2){
        printf("A Carta 1 venceu a Carta 2!\n");
    }else{
        printf("A Carta 2 venceu a Carta 1!\n");
    }
break;
case 4:
        printf("Carta 1:\nPaís: %s\nPontos Turísticos: %d\n", pais1, ponto_turistico1);
        printf("Carta 2:\nPaís: %s\nPontos Turísticos: %d\n", pais2, ponto_turistico2);
    if(ponto_turistico1 == ponto_turistico2){
        printf("Empate\n");
    }else if(ponto_turistico1 > ponto_turistico2){
        printf("A Carta 1 venceu a Carta 2!\n");
    }else{
        printf("A Carta 2 venceu a Carta 1!\n");
    }
break;
case 5:
        printf("Carta 1:\nPaís: %s\nDensidade Populacional: %.2f hab/km2\n", pais1, densidade_populacional1);
        printf("Carta 2:\nPaís: %s\nDensidade Populacional: %.2f hab/km2\n", pais2, densidade_populacional2);
    if(densidade_populacional1 == densidade_populacional2){
        printf("Empate\n");
    }else if(densidade_populacional1 < densidade_populacional2){
        printf("A Carta 1 venceu a Carta 2!\n");
    }else{
        printf("A Carta 2 venceu a Carta 1!\n");
    }
break;
case 6:
        printf("Carta 1:\nPaís: %s\nPIB per Capita: %.3f reais\n", pais1, pib_per_capita1);
        printf("Carta 2:\nPaís: %s\nPIB per Capita: %.3f reais\n", pais2, pib_per_capita2);
    if(pib_per_capita1 == pib_per_capita2){
        printf("Empate\n");
    }else if(pib_per_capita1 > pib_per_capita2){
        printf("A Carta 1 venceu a Carta 2!\n");
    }else{
        printf("A Carta 2 venceu a Carta 1!\n");
    }
break;
default:
        printf("Opção inválida!\n");
break;
}

return 0;

}