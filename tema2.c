#include <stdio.h>

int main(){

    int populacao1, populacao2, npt1, npt2;
    char estado1[50], codigo1[50], estado2[50], codigo2[50];
    char cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2;

// Declaração de variaveis (obs) npt - Numero de Pontos Turisticos
// cada variavel tem 1 e 2 para armazenar os dados das duas cartas.

printf ("Digite os dados da primeira carta:\n");
printf("\n");

printf ("Digite o Estado da Carta 1:\n");
 scanf("%s", &estado1);
 printf("\n");

 printf ("Digite o Codigo da Carta 1:\n");
 scanf("%s", &codigo1);
 printf("\n");

 printf ("Digite o Nome da Cidade da Carta 1:\n");
 scanf("%s", &cidade1);
 printf("\n");

 printf ("Digite o População da Carta 1:\n");
 scanf("%d", &populacao1);
 printf("\n");

printf ("Digite o Área da Carta 1:\n");
 scanf("%f", &area1);
 printf("\n");

printf ("Digite o PIB da Carta 1:\n");
 scanf("%f", &pib1);
 printf("\n");

printf ("Digite o Numero de Pontos Turisticos da Carta 1:\n");
 scanf("%d", &npt1);
 printf("\n");
 
 //Gravando os dados da primeira carta

printf ("Digite os dados da segunda carta:\n");
printf("\n");

printf ("Digite o Estado da Carta 2:\n");
 scanf("%s", &estado2);
 printf("\n");

printf ("Digite o Codigo da Carta 2:\n");
 scanf("%s", &codigo2);
 printf("\n");

printf ("Digite o Nome da Cidade da Carta 2:\n");
 scanf("%s", &cidade2);
 printf("\n");

printf ("Digite o População da Carta 2:\n");
 scanf("%d", &populacao2);
 printf("\n");

printf ("Digite o Área da Carta 2:\n");
 scanf("%f", &area2);
 printf("\n");

printf ("Digite o PIB da Carta 2:\n");
 scanf("%f", &pib2);
 printf("\n");

printf ("Digite o Numero de Pontos Turisticos da Carta 2:\n");
 scanf("%d", &npt2);
 printf("\n");
 
 //Gravando os dados da segunda carta

 printf(" Carta 1:\n");
 printf("\n");
 
 printf(" Estado: %s \n", estado1);
 printf(" Código: %s \n", codigo1);
 printf(" Nome da Cidade: %s \n", cidade1);
 printf(" População: %d \n", populacao1);
 printf(" Aria: %f KM\n", area1);
 printf(" PIB: %f  Bilhões de Reais\n", pib1);
 printf(" Numeros de Pontos Turisticos: %d \n", npt1);
 printf("\n");

 // Imprimindo dados na tela para o usuario da primeira carta

 printf(" Carta 2:\n");
 printf("\n");
 
 printf(" Estado: %s \n", estado2);
 printf(" Código: %s \n", codigo2);
 printf(" Nome da Cidade: %s \n", cidade2);
 printf(" População: %d \n", populacao2);
 printf(" Aria: %f KM\n", area2);
 printf(" PIB: %f Bilhões de Reais\n", pib2);
 printf(" Numeros de Pontos Turisticos: %d \n", npt2);
 printf("\n");

// Imprimindo dados na tela para o usuario da sugunda carta

return 0;
}
