#include <stdio.h>

int main(){
  //Declaracao das variáveis necessarias
  unsigned long int populacao1, populacao2;
  int mumPontosTuristicos1, mumPontosTuristicos2;
  float areaKM1, PIB1, areaKM2, PIB2, Densidade1, Densidade2, PIBperCapita1, PIBperCapita2;
  char estado1[10], estado2[10];
  char nomeCidade1[20], codCarta1[10], nomeCidade2[20], codCarta2[10];

  float superPoder1, superPoder2;

  printf("********* Super Trunfo de Cidades ********\n");
  printf("\n");  
  //Entrada de dados da carta 1
  printf("Vamos cadastrar os dados da primeira carta.\n");
  printf("Digite uma letra para representar um Estado:\n");
  scanf("%s", estado1);
  printf("Digite o codigo da carta, ela deve conter a letra do estado seguida de um numero de 01 a 04:\n");
  scanf("%s", codCarta1);
  printf("Digite o nome da cidade:\n");
  scanf("%s", nomeCidade1);
  printf("Digite a populacao da cidade:\n");
  scanf("%lu", &populacao1);
  printf("Digite a area em km2 cidade:\n");
  scanf("%f", &areaKM1);
  printf("Digite o PIB da cidade em bilhoes de reais:\n");
  scanf("%f", &PIB1);
  printf("Digite o numero de pontos turisticos da cidade:\n");
  scanf("%d", &mumPontosTuristicos1);
  printf("Carta cadastrada com sucesso!\n");
  printf("\n");
  //Calculo da Densidade demografica e PIB per capita da carta 1
  Densidade1 = populacao1 / areaKM1;
  PIBperCapita1 = (PIB1*1000000000) / populacao1;
  //Calcular o Super Poder
  superPoder1 = (populacao1 + areaKM1 + PIB1 + mumPontosTuristicos1 + PIBperCapita1 + (1/Densidade1));


  //Exibicao dos dados da carta 1
  printf("Dados da carta 1:\n");
  printf("Codigo da carta: %s\n", codCarta1);
  printf("Estado: %s\n", estado1);
  printf("Nome da cidade: %s\n", nomeCidade1); 
  printf("Populacao: %lu\n", populacao1);
  printf("Area em km2: %.2f\n", areaKM1);
  printf("PIB: %.2f bilhoes de reais\n", PIB1);
  printf("Numero de pontos turisticos: %d\n", mumPontosTuristicos1);
  printf("Densidade demografica: %.2f hab/km2\n", Densidade1);
  printf("PIB per capita: %.2f reais\n", PIBperCapita1);
  printf("Super Poder: %.2f \n", superPoder1);
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
  scanf("%lu", &populacao2);
  printf("Digite a area em km2 cidade:\n");
  scanf("%f", &areaKM2);
  printf("Digite o PIB da cidade em bilhoes de reais:\n");    
  scanf("%f", &PIB2);
  printf("Digite o numero de pontos turisticos da cidade:\n");
  scanf("%d", &mumPontosTuristicos2);  
  printf("Carta cadastrada com sucesso!\n");
  printf("\n");
  
  //Calculo da Densidade demografica e PIB per capita da carta 2
  Densidade2 = populacao2 / areaKM2;
  PIBperCapita2 = (PIB2*1000000000) / populacao2;

  //Calcular o Super Poder
   superPoder2 = (populacao2 + areaKM2 + PIB2 + mumPontosTuristicos2 + PIBperCapita2 + (1/Densidade2));

  //Exibicao dos dados da carta 2
  printf("Dados da carta 2:\n");
  printf("Codigo da carta: %s\n", codCarta2);
  printf("Estado: %s\n", estado2);  
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area em km2: %.2f\n", areaKM2);
  printf("PIB: %.2f bilhoes de reais\n", PIB2);
  printf("Numero de pontos turisticos: %d\n", mumPontosTuristicos2);
  printf("Densidade demografica: %.2f hab/km2\n", Densidade2);
  printf("PIB per capita: %.2f reais \n", PIBperCapita2);
  printf("Super Poder: %.2f \n", superPoder2);
  printf("\n");

  //Comparações netre cartas
  printf("Comparacoes entre as cartas - 0 para carta 2 vence e 1 para carta 1 vence\n");

  printf("A carta %s tem a populacao maior que a carta %s ? %d\n", codCarta1, codCarta2, populacao1 > populacao2);
  printf("A carta %s tem a area em km2 maior que a carta %s ? %d\n", codCarta1, codCarta2, areaKM1 > areaKM2);
  printf("A carta %s tem o PIB maior que a carta %s ? %d\n", codCarta1, codCarta2, PIB1 > PIB2);
  printf("A carta %s tem o numero de pontos turisticos maior que a carta %s ? %d\n", codCarta1, codCarta2, mumPontosTuristicos1 > mumPontosTuristicos2);
  printf("A carta %s tem a densidade demografica maior que a carta %s ? %d\n", codCarta1, codCarta2, Densidade1 < Densidade2);
  printf("A carta %s tem o PIB per capita maior que a carta %s ? %d\n", codCarta1, codCarta2, PIBperCapita1 > PIBperCapita2);     
  printf("A carta %s tem o super poder maior que a carta %s ? %d\n", codCarta1, codCarta2, superPoder1 > superPoder2);

  return 0;
}