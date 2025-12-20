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
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita2 = pib2 / populacao2;
    float densidade_populacional2 = populacao2 / area2;

    //ARMAZENAMENTO SUPER TRUNFO - SOMA DO RESULTADO DE CADA CARTA

    unsigned int super_trunfo1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1;
    unsigned int super_trunfo2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2;

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
  printf("SUPER TRUNFO: %u \n\n" , super_trunfo1);

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
  printf("SUPER TRUNFO: %u \n\n" , super_trunfo2);

//DEFININDO O VENCEDOR COM ESTRUTURA DE DECISÃO E MENU COM SWITCH


int atributo_carta1;
int atributo_carta2;
int resultado1 = 1;
int resultado2 = 0;

printf("\n****ESCOLHA UM DOS ATRIBUTOS DA CARTA 1 PARA COMPARAÇÃO****\n");
printf("1- POPULAÇÃO\n");
printf("2- ÁREA\n");
printf("3- PIB\n");
printf("4- NÚMERO DE PONTOS TURISTICOS\n");
printf("5- DENSIDADE DEMOGRÁFICA\n");

printf("**ESCOLHA A PRIMEIRA COMPARAÇÃO**:");
scanf("%d", &atributo_carta1);

switch(atributo_carta1)
{
case 1:

 printf("\nVOCÊ ESCOLHEU A OPÇÃO POPULAÇÃO\n");
resultado1 = populacao1 > populacao2 ? 1 : 0;
 
break;

case 2:

  printf("\nVOCÊ ESCOLHEU O ATRIBUTO ÁREA\n");
  resultado1 = area1 > area2 ? 1 : 0;

break;

case 3:
 
printf("\nVOCÊ ESCOLHEU O ATRIBUTO PIB\n");
resultado1 = pib1 > pib2 ? 1 : 0;

break;

case 4:

printf("\nVOCÊ ESCOLHEU O ATRIBUTO PONTOS TURISTICOS\n");
resultado1 = pontos1 > pontos2 ? 1 : 0;

 break;

case 5:

 printf("\nVOCÊ ESCOLHEU DENSIDADE DEMOGRÁFICA\n");
resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
 
break;

default:
 printf ("\nOPÇÃO INVALIDA");
}

printf("\n****ESCOLHA O ATRIBUTO DA SEGUNDA CARTA PARA COMPARAÇÃO****\n");
printf("1- POPULAÇÃO\n");
printf("2- ÁREA\n");
printf("3- PIB\n");
printf("4- NÚMERO DE PONTOS TURISTICOS\n");
printf("5- DENSIDADE DEMOGRÁFICA\n");

printf("\n**ESCOLHA A SEGUNDA COMPARAÇÃO**\n");
scanf("%d", &atributo_carta2);

if (atributo_carta1 != atributo_carta2)
{ printf("XXXXXXX  VOCÊ NÃO ESCOLHEU O MESMO ATRIBUTO  XXXXXXX");
 } else{

switch(atributo_carta2)
{
case 1:

 printf("\nVOCÊ ESCOLHEU A OPÇÃO POPULAÇÃO\n");
resultado1 = populacao1 > populacao2 ? 1 : 0;
 
break;

case 2:

  printf("\nVOCÊ ESCOLHEU O ATRIBUTO ÁREA\n");
  resultado1 = area1 > area2 ? 1 : 0;

break;

case 3:
 
printf("\nVOCÊ ESCOLHEU O ATRIBUTO PIB\n");
resultado1 = pib1 > pib2 ? 1 : 0;

break;

case 4:

printf("\nVOCÊ ESCOLHEU O ATRIBUTO PONTOS TURISTICOS\n");
resultado1 = pontos1 > pontos2 ? 1 : 0;

 
break;

case 5:

 printf("\nVOCÊ ESCOLHEU O ATRIBUTO DENSIDADE DEMOGRÁFICA\n");
resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
 
break;

default:
 printf ("\nOPÇÃO INVALIDA\n");
}
if {(resultado1 > resultado2)
printf("CIDADE %s VENCEU!!!!\n" , cidade1);
}
else if {(resultado1 < resultado2)
printf("CIDADE %s VENCEU!!!!\n" , cidade2);
}
else {
printf ("***EMPATE!!!!***");
}


return 0;
}  

  

   