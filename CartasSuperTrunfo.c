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
  float populacao;
  float areakm;
  float pib;
  int np_turismo;
  float densidadep;
  float pibp;
  float superpoder;
  float inverso_densidade;

  
     // Carta 2
  char estado2;
  char codcarta2[3];
  char nome_cidade2[50];
  float populacao2;
  float areakm2;
  float pib2;
  int np_turismo2;
  float densidadep2;
  float pibp2;
  float superpoder2;
  float inverso_densidade2;

  // resultados
    int resultadopo;
    int resultadoArea;
    int resultadopib;
    int resultadopontos;
    int resultadoDensiP;
    int resultadoPibp;
    int resultadosuperp;

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
  scanf("%f", &populacao);
  printf("A população %.0f foi incluido com sucesso\n", populacao);

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
  scanf("%f", &populacao2);
  printf("A população %.0f foi incluido com sucesso\n", populacao2);

  printf("Digite a Área: ");
  scanf("%f", &areakm2);
  printf("A Área %.2f foi incluido com sucesso\n", areakm2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("O PIB %.2f incluido com sucesso\n", pib2);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &np_turismo2);
  printf("Os pontos turisticos %d foi incluido com sucesso\n", np_turismo2);

 // CÁLCULOS - Carta 1
densidadep = (populacao/areakm);
pibp = (pib/populacao);

 // CÁLCULOS - Carta 2

densidadep2 = (populacao2/areakm2);
pibp2 = (pib2/populacao2);

inverso_densidade  = areakm / populacao;
inverso_densidade2  = areakm2 / populacao2;

//superpoder
superpoder = (populacao+ areakm+ pib+np_turismo+pibp+inverso_densidade);
superpoder2 = (populacao2+ areakm2+ pib2+np_turismo2+pibp2+inverso_densidade2);

// pegar resultados
resultadopo = populacao > populacao2;
resultadoArea = areakm > areakm2;
resultadopib = pib > pib2;
resultadopontos = np_turismo > np_turismo2;
resultadoDensiP = densidadep > densidadep2;
resultadoPibp = pibp > pibp2;
resultadosuperp = superpoder > superpoder2;



  // EXIBIÇÃO DOS DADOS
  printf("\nExibindo Dados da Carta 1\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da carta: %c%s\n", estado,codcarta);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("População: %.0f\n", populacao);
  printf("Área: %f km²\n", areakm);
  printf("PIB: %f\n", pib);
  printf("Pontos turisticos: %d\n", np_turismo);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadep);
  printf("PIB per capita: R$ %.2f\n", pibp);

  printf("\nExibindo Dados da Carta 2 \n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %c%s\n", estado2,codcarta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %.0f\n", populacao2);
  printf("Área: %f km²\n", areakm2);
  printf("PIB: %f\n", pib2);
  printf("Pontos turisticos: %d\n", np_turismo2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
  printf("PIB per capita: R$ %.2f\n\n\n", pibp2);

// resultado comparação cartas

  printf("Comparação das cartas:\n");
  printf("População: Carta %s ganhou\n", resultadopo ? codcarta : codcarta2);
  printf("Área: Carta %s ganhou\n", resultadoArea ? codcarta : codcarta2);
  printf("PIB: Carta %s ganhou\n", resultadopib ? codcarta : codcarta2);
  printf("Pontos Turísticos: Carta %s ganhou\n", resultadopontos ? codcarta : codcarta2);
  printf("Densidade Populacional: Carta %s ganhou\n", resultadoDensiP ? codcarta : codcarta2);
  printf("PIB per capita: Carta %s ganhou\n", resultadoPibp ? codcarta : codcarta2);
  printf("Superpoder: Carta %s ganhou\n", resultadosuperp ? codcarta : codcarta2);

  return 0;
}