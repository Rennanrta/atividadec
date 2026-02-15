#include <stdio.h>

int main(){

    int npt1, npt2;
    long int populacao1, populacao2;
    char estado1[50], codigo1[50], estado2[50], codigo2[50], cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2, dencidade1, dencidade2, pibcapita1, pibcapita2;

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
 scanf("%ld", &populacao1);
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
 scanf("%ld", &populacao2);
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

dencidade1 = populacao1 / area1;
pibcapita1 = (pib1*1000000000) / populacao1;

//caluculando a dencidade populacional e PIB capita carta 1

dencidade2 = populacao2 / area2;
pibcapita2 = (pib2*1000000000) / populacao2;

//caluculando a dencidade populacional e PIB capita carta 2

int resulpopulacao, resularea, resulpib, resulnpt, resuldencidade, resulpibcapita, resulsuper;
double inversaodenc1, inversaodenc2, super1, super2;

// declaração de variaveis resuldado e inversao da dencidade 

inversaodenc1 = area1 / populacao1;

// inversão da dencidade carta  1

inversaodenc2 = area2 / populacao2;

// inversão da dencidade carta  2

super1 = populacao1 + area1 + pib1 + npt1 + pibcapita1 + inversaodenc1;

// soma das variaveis para o Super poder da carta 1

super2 = populacao2 + area2 + pib2 + npt2 + pibcapita2 + inversaodenc2;

// soma das variaveis para o Super poder da carta 2

resulpopulacao = populacao1>populacao2;
resularea = area1>area2;
resulpib = pib1>pib2;
resulnpt = npt1>npt2;
resuldencidade = dencidade1<dencidade2;
resulpibcapita = pibcapita1>pibcapita2;
resulsuper = super1>super2;

// variaveis de comparação das duas cartas

 printf(" Carta 1:\n");
 printf("\n");
 
 printf(" Estado: %s \n", estado1);
 printf(" Código: %s \n", codigo1);
 printf(" Nome da Cidade: %s \n", cidade1);
 printf(" População: %d \n", populacao1);
 printf(" Aria: %f KM\n", area1);
 printf(" PIB: %f  Bilhões de Reais\n", pib1);
 printf(" Numeros de Pontos Turisticos: %d \n", npt1);
 printf(" Densidade Populacional: %f Hab/Km \n", dencidade1);
 printf(" PIB per Capita: %f Reais \n", pibcapita1);
 printf("\n");

 // Imprimindo dados na tela para o usuario da primeira carta

 printf(" Carta 2:\n");
 printf("\n");
 
 printf(" Estado: %s \n", estado2);
 printf(" Código: %s \n", codigo2);
 printf(" Nome da Cidade: %s \n", cidade2);
 printf(" População: %d \n", populacao2);
 printf(" Aria: %.2f KM\n", area2);
 printf(" PIB: %2.f Bilhões de Reais\n", pib2);
 printf(" Numeros de Pontos Turisticos: %d \n", npt2);
 printf(" Densidade Populacional: %.2f Hab/Km \n", dencidade2);
 printf(" PIB per Capita: %.2f Reais \n", pibcapita2);
 printf("\n");

// Imprimindo dados na tela para o usuario da sugunda carta

printf ("Resultado da comparação da cartas\n");
printf ("\n");
printf(" População: Carta 1 venceu ( %d ) \n", resulpopulacao);
printf(" População: Carta 1 venceu ( %d ) \n", resularea);
printf(" População: Carta 1 venceu ( %d ) \n", resulpib);
printf(" População: Carta 1 venceu ( %d ) \n", resulnpt);
printf(" População: Carta 2 venceu ( %d ) \n", resuldencidade);
printf(" População: Carta 1 venceu ( %d ) \n", resulpibcapita);
printf(" População: Carta 1 venceu ( %d ) \n", resulsuper);
printf ("\n");

// imprimir ao usuario as comparaçoes da carta

return 0;
}
