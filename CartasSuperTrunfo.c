#include <stdio.h>

int main(){
  //Declaracao das variáveis necessarias
  int populacao1, mumPontosTuristicos1,populacao2, mumPontosTuristicos2;
  float areaKM1, PIB1, areaKM2, PIB2;
  char estado1[10], estado2[10];
  char nomeCidade1[20], codCarta1[10], nomeCidade2[20], codCarta2[10];

  //Entrada de dados da carta 1
  printf("Vamos cadastrar os dados da primeira carta.\n");
  printf("Digite uma letra para representar um Estado:\n");
  scanf("%s", estado1);
  printf("Digite o codigo da carta, ela deve conter a letra do estado seguida de um numero de 01 a 04:\n");
  scanf("%s", codCarta1);
  printf("Digite o nome da cidade:\n");
  scanf("%s", nomeCidade1);
  printf("Digite a populacao da cidade:\n");
  scanf("%d", &populacao1);
  printf("Digite a area em km2 cidade:\n");
  scanf("%f", &areaKM1);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &PIB1);
  printf("Digite o numero de pontos turisticos da cidade:\n");
  scanf("%d", &mumPontosTuristicos1);
  printf("\n");
  printf("Carta cadastrada com sucesso!\n");

  //Exibicao dos dados da carta 1
  printf("Dados da carta 1:\n");
  printf("Codigo da carta: %s\n", codCarta1);
  printf("Estado: %s\n", estado1);
  printf("Nome da cidade: %s\n", nomeCidade1); 
  printf("Populacao: %d\n", populacao1);
  printf("Area em km2: %.2f\n", areaKM1);
  printf("PIB: %.2f\n", PIB1);
  printf("Numero de pontos turisticos: %d\n", mumPontosTuristicos1);
  printf("\n");

  //
  //Entrada de dados da carta 2
  printf("Vamos cadastrar os dados da segunda carta.\n");
  printf("Digite uma letra para representar um Estado:\n");
  scanf("%s", estado2);
  printf("Digite o codigo da carta, ela deve conter a letra do estado seguida de um numero de 01 a 04:\n");
  scanf("%s", codCarta2);
  printf("Digite o nome da cidade:\n");
  scanf("%s", nomeCidade2);
  printf("Digite a populacao da cidade:\n");
  scanf("%d", &populacao2);
  printf("Digite a area em km2 cidade:\n");
  scanf("%f", &areaKM2);
  printf("Digite o PIB da cidade:\n");    
  scanf("%f", &PIB2);
  printf("Digite o numero de pontos turisticos da cidade:\n");
  scanf("%d", &mumPontosTuristicos2);
  printf("\n");
  printf("Carta cadastrada com sucesso!\n");

  //Exibicao dos dados da carta 2
  printf("Dados da carta 2:\n");
  printf("Codigo da carta: %s\n", codCarta2);
  printf("Estado: %s\n", estado2);  
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area em km2: %.2f\n", areaKM2);
  printf("PIB: %.2f\n", PIB2);
  printf("Numero de pontos turisticos: %d\n", mumPontosTuristicos2);
  printf("\n");

  return 0;
}