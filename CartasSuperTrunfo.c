#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Variáveis para a carta 1
    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    unsigned int populacao1;
    int pontos1;
    float area1;
    float pib1;
   
    //Variáveis para a carta 2
    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    unsigned int populacao2;
    int pontos2;
    float area2;
    float pib2;

    //ENTRADA DE DADOS DA CARTA 1
    printf("PREENCHA AS INFORMAÇÕES DAS SUAS CARTAS \n");
    printf("-----CARTA 1----- \n" );
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código da carta:");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População:");
    scanf("%u", &populacao1);
    printf("Aréa (km²):");
    scanf("%f", &area1);
    printf("PIB:");
    scanf("%f", &pib1);
    printf("Pontos Turisticos:");
    scanf("%d", &pontos1);
    
//ENTRADA DE DADOS DA CARTA 2
    printf("-----CARTA 2----- \n" );
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código da carta:");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População:");
    scanf("%u", &populacao2);
    printf("Aréa (km²):");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos:");
    scanf("%d", &pontos2);
   
     //VARIAVEIS DEPOIS DA ENTRADA DOS DADOS 
    float pib_per_capita1 = pib1 / populacao1;
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_per_capita2 = pib2 / populacao2;
    float densidade_populacional2 = (float)populacao2 / area2;

    //ARMAZENAMENTO SUPER TRUNFO - SOMA DO RESULTADO DE CADA CARTA

    float super_trunfo1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1;
    float super_trunfo2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2;

//EXIBIÇÃO DAS CARTAS CADASTRADAS
    printf("\n----CARTAS CADASTRADAS----\n");
    
    //EXIBIÇÃO CARTA 1

  printf("\n****CARTA 1****\n\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %u\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional:  %.2f hab/km²\n" , densidade_populacional1 );
  printf("PIB PER CAPITA:  %.2f Reais\n\n" , pib_per_capita1 );
  printf("SUPER TRUNFO: %.2f \n\n" , super_trunfo1);

//EXIBIÇÃO CARTA 2

  printf("\n****CARTA 2****\n\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %u\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional2 );
  printf("PIB PER CAPITA:  %.2f Reais\n\n" , pib_per_capita2 );
  printf("SUPER TRUNFO: %.2f \n\n" , super_trunfo2);

//DEFININDO O VENCEDOR COM ESTRUTURA DE DECISÃO E MENU COM SWITCH


int atributo;
int resultado;

printf("\n****ESCOLHA O ATRIBUTO PARA DEFINIR O VENCEDOR****\n");
printf("1- POPULAÇÃO\n");
printf("2- ÁREA\n");
printf("3- PIB\n");
printf("4- NÚMERO DE PONTOS TURISTICOS\n");
printf("5- DENSIDADE DEMOGRÁFICA\n");

scanf("%d", &atributo);

switch(atributo)
{
case 1:
    printf("\nATRIBUTO: POPULAÇÃO\n");
    if (populacao1 > populacao2)
        resultado = 1;
    else if (populacao2 > populacao1)
        resultado = -1;
    else
        resultado = 0;
    break;

case 2:
    printf("\nATRIBUTO: ÁREA\n");
    if (area1 > area2)
        resultado = 1;
    else if (area2 > area1)
        resultado = -1;
    else
        resultado = 0;
    break;

case 3:
    printf("\nATRIBUTO: PIB\n");
    if (pib1 > pib2)
        resultado = 1;
    else if (pib2 > pib1)
        resultado = -1;
    else
        resultado = 0;
    break;

case 4:
    printf("\nATRIBUTO: PONTOS TURÍSTICOS\n");
    if (pontos1 > pontos2)
        resultado = 1;
    else if (pontos2 > pontos1)
        resultado = -1;
    else
        resultado = 0;
    break;

case 5:
    printf("\nATRIBUTO: DENSIDADE DEMOGRÁFICA\n");
    // menor densidade vence
    if (densidade_populacional1 < densidade_populacional2)
        resultado = 1;
    else if (densidade_populacional2 < densidade_populacional1)
        resultado = -1;
    else
        resultado = 0;
    break;

default:
    printf("\nOPÇÃO INVÁLIDA\n");
    return 0;
}


return 0;
}

  

   