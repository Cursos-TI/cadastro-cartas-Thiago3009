#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  //declarando variaveis da primeira carta 
  char estado;
  char codigo_carta[5];
  char cidade[20];
  int n_populacao;
  float area_km;
  float pib;
  int qtd_pontos_turisticos;
  
  //declarando variaveis da segunda carta
  char estado2;
  char codigo_carta2[5];
  char cidade2[20];
  int n_populacao2;
  float area_km2;
  float pib2;
  int qtd_pontos_turisticos2;


  //coletando dados da primeira carta 
  printf("Digite as informaçoes da primeira carta\nInforme o estado:");
  scanf("%c", &estado);
  printf("Informe o código da primeira carta:");
  scanf("%s", codigo_carta);
  printf("Informe o nome da primeira cidade:");
  scanf("%s", cidade);
  printf("Informe a população da primeira cidade:");
  scanf("%d", &n_populacao);
  printf("Informe a área da primeira cidade em quilômetros quadrados:");
  scanf("%f", &area_km);
  printf("Informe o PIB(Produto Interno Bruto) da primeira cidade:");
  scanf("%f", &pib);

  //limpa o enter deixado no buffer
  getchar();
  
  //coletando dados da segunda carta
  printf("Digite as informaçoes da segunda carta\nInforme o estado:");
  scanf("%c", &estado2);
  printf("Informe o código da segunda carta:");
  scanf("%s", codigo_carta2);
  printf("Informe o nome da segunda cidade:");
  scanf("%s", cidade2);
  printf("Informe a população da segunda cidade:");
  scanf("%d", &n_populacao2);
  printf("Informe a área da segunda cidade em quilômetros quadrados:");
  scanf("%f", &area_km2);
  printf("Informe o PIB(Produto Interno Bruto) da segunda cidade:");
  scanf("%f", &pib2);

  //imprimindo na tela dados da primeira carta
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo_carta);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", n_populacao);
  printf("Área: %f\n", area_km);
  printf("PIB: %f\n",pib);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos);

  //imprimindo na tela dados da segunda carta
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_carta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", n_populacao2);
  printf("Área: %f\n", area_km2);
  printf("PIB: %f\n",pib2);
  printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos2);

  return 0;
} 
