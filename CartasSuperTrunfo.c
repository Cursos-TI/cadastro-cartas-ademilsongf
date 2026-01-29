#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
      // Carta 1
  char estado;
  char codcarta[3];
  char nome_cidade[50];
  int populacao;
  float areakm;
  float pib;
  int np_turismo;
  
     // Carta 2
  char estado2;
  char codcarta2[3];
  char nome_cidade2[50];
  int populacao2;
  float areakm2;
  float pib2;
  int np_turismo2;
      // Área para entrada de dados
      // PRIMEIRA CARTA
  printf("Digite o Estado da carta Exemplo(A,B): ");
  scanf(" %c", &estado);  
  printf("Estado %c foi incluido com sucesso...\n", estado);

  printf("Digite codigo da carta: ");
  scanf("%s", codcarta);
  printf("Codigo da carta de numero %s foi incluido com sucesso\n", codcarta);

  printf("Digite nome da cidade: ");
  scanf("%s", nome_cidade);
  printf("Nome da cidade %s foi incluido com sucesso\n", nome_cidade);

  printf("Digite a população: ");
  scanf("%d", &populacao);
  printf("A população %d foi incluido com sucesso\n", populacao);

  printf("Digite a Área: ");
  scanf("%f", &areakm);
  printf("A Área %.2f foi incluido com sucesso\n", areakm);

  printf("Digite o PIB: ");
  scanf("%f", &pib);
  printf("O PIB %.2f incluido com sucesso\n", pib);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &np_turismo);
  printf("Os pontos turisticos %d foi incluido com sucesso\n", np_turismo);

  printf("\nA primeira carta foi incluida\n");
  printf("Vamos incluir a segunda carta\n\n");

  // SEGUNDA CARTA
  printf("Digite o Estado da carta Exemplo(A,B): ");
  scanf(" %c", &estado2);
  printf("Estado %c foi incluido com sucesso...\n", estado2);

  printf("Digite codigo da carta: ");
  scanf("%s", codcarta2);
  printf("Codigo da carta de numero %s foi incluido com sucesso\n", codcarta2);

  printf("Digite nome da cidade: ");
  scanf("%s", nome_cidade2);
  printf("Nome da cidade %s foi incluido com sucesso\n", nome_cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("A população %d foi incluido com sucesso\n", populacao2);

  printf("Digite a Área: ");
  scanf("%f", &areakm2);
  printf("A Área %.2f foi incluido com sucesso\n", areakm2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("O PIB %.2f incluido com sucesso\n", pib2);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &np_turismo2);
  printf("Os pontos turisticos %d foi incluido com sucesso\n", np_turismo2);

  // EXIBIÇÃO DOS DADOS
  printf("\nExibindo Dados da Carta 1\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da carta: %c%s\n", estado,codcarta);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", areakm);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turisticos: %d\n", np_turismo);

  printf("\nExibindo Dados da Carta 2 \n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %c%s\n", estado2,codcarta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", areakm2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turisticos: %d\n", np_turismo2);

  return 0;
}