#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Variáveis para a carta 1
    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    long int populacao1;
    int pontos1;
    float area1;
    float pib1;
    float pib_per_capita1;
    float densidade_populacional1;

   
    //Variáveis para a carta 2
    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    unsigned long int populacao2;
    int pontos2;
    float area2;
    float pib2;
    float pib_per_capita2;
    float densidade_populacional2;

    

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
    scanf("%d", &populacao1);
    printf("Aréa (km²):");
    scanf("%f", &area1);
    printf("PIB: ");
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
    scanf("%d", &populacao2);
    printf("Aréa (km²):");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos:");
    scanf("%d", &pontos2);
   
    
    //DEPOIS DA ENTRADA DOS DADOS 
    pib_per_capita1 = pib1 / populacao1;
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita2 = pib2 / populacao2;
    densidade_populacional2 = populacao2 / area2 ;

    //EXIBIÇÃO DAS CARTAS CADASTRADAS
    printf("----CARTAS CADASTRADAS----\n\n");
    
    //CARTA 1

  printf("****CARTA 1****\n\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional:  %.2f hab/km²\n" , densidade_populacional1 );
  printf("PIB PER CAPITA:  %.2f Reais\n\n" , pib_per_capita1 );


  //CARTA 2

  printf("****CARTA 2****\n\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional2 );
  printf("PIB PER CAPITA:  %.2f Reais\n" , pib_per_capita2 );

//ARMAZENAMENTO DOS DADOS PARA COMPARAÇÃO
unsigned long int resultado_populacao;
float resultado_area;
float resultado_pontosturisticos;
float resultado_densidade_populacional;
float resultados_pib_capita;
long int resultado_super_trunfo;
long int super_trunfo1;
long int super_trunfo2;

//ARMAZENAMENTO SUPER TRUNFO - SOMA DO RESULTADO DE CADA CARTA

long int super_trunfo1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1;
long int super_trunfo2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2;

//COMPARAÇÃO DOS RESULTADOS - DEFININDO O VENCEDOR

 resultado_populacao = populacao1 > populacao2;
 resultado_area = area1 > area2;
 resultado_pontosturisticos = pontos1 > pontos2;
 resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
 resultados_pib_capita = pib_per_capita1 > pib_per_capita2;
 resultado_super_trunfo = super_trunfo1 > super_trunfo2;


// exibição do resultado

printf("GANHADOR DO JOGO\n");
printf("1 PARA CARTA *1 e 0 PARA CARTA *2\n\n")

printf("População:  ")






  

    

   return 0;
}  