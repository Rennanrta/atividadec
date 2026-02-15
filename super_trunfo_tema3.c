#include <stdio.h>

int main(){
      
    int menu1, menujogo2;
    float dencidade1, dencidade2, pibcapita1, pibcapita2;

// declaracao de variavel

    char estado1[50] = "A";
    char codigo1[50] = "A01";
    char cidade1[50] = "SãoPaulo";
    long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int npt1 = 50;

//Carta 1 declaracao de variavel com dos dados do usuario 

char estado2[50] = "B";
    char codigo2[50] = "B02";
    char cidade2[50] = "RiodeJaneiro";
    long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int npt2 = 30;

//carta 2 declaracao de variavel com dos dados do usuario 

dencidade1 = populacao1 / area1;
pibcapita1 = (pib1*1000000000) / populacao1;

//caluculando a dencidade populacional e PIB capita carta 1

dencidade2 = populacao2 / area2;
pibcapita2 = (pib2*1000000000) / populacao2;

//caluculando a dencidade populacional e PIB capita carta 2

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
 printf(" Carta 1:\n");
 printf("\n");
 
 printf(" Estado: %s \n", estado1);
 printf(" Código: %s \n", codigo1);
 printf(" Nome da Cidade: %s \n", cidade1);
 printf(" População: %d \n", populacao1);
 printf(" Aria: %.2f KM\n", area1);
 printf(" PIB: %.2f  Bilhões de Reais\n", pib1);
 printf(" Numeros de Pontos Turisticos: %d \n", npt1);
 printf(" Densidade Populacional: %.2f Hab/Km \n", dencidade1);
 printf(" PIB per Capita: %.2f Reais \n", pibcapita1);
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

printf ( " Jogo do Super Trunfo \n");
printf ("\n");
printf("Escolha a Opção:\n");
printf ("\n");
printf("Iniciar o Jogo: 1 \n");
printf("Regras: 2\n");
printf("Sair: 3\n");
scanf("%d",&menu1);
printf("\n");

//Inicializando o menu principal do jogo

switch (menu1)
{
case 1:
    
printf(" Escolha a Opção que você quer comparar:\n");
printf("\n");
printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
printf("\n");
printf(" População: 1 \n");
printf(" Área: 2 \n");
printf(" PIB: 3 \n");
printf(" Numeros de Pontos Turisticos: 4 \n");
printf(" Dencidade Demografica: 5 \n");
scanf( "%d", &menujogo2);
printf("\n");

// inicializando o menu do novo jogo com as opçães de comparação

switch (menujogo2)
{
case 1:

    if (populacao1 > populacao2 ){
        
        printf("População:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d      %s: %d \n",cidade1, populacao1, cidade2, populacao2);
        printf ("Carta 1 Venceu \n");
        printf("\n");


    }else if (populacao1 == populacao2 ){

        printf("População:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d      %s: %d \n",cidade1, populacao1, cidade2, populacao2);
        printf("Deu Empate!");
        printf("\n");

    } else {

        printf("População:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d      %s: %d \n",cidade1, populacao1, cidade2, populacao2);
        printf ("Carta 2 Venceu \n");
        printf("\n");
    }

//Resultado da comparacao de população

break;

case 2:
 
    if (area1 > area2 ){
        
        printf("Área:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d      %s: %d \n",cidade1, area1, cidade2, area2);
        printf ("Carta 1 Venceu \n");
        printf("\n");


    }else if (area1 == area2 ){

        printf("Área:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d      %s: %d \n",cidade1, area1, cidade2, area2);
        printf("Deu Empate!");
        printf("\n");

    } else {

        printf("Área:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d      %s: %d \n",cidade1, area1, cidade2, area2);
        printf ("Carta 2 Venceu \n");
        printf("\n");
    }

//Resultado da comparacao de area

break;

case 3:

    if (pib1 > pib2 ){
        
        printf("PIB:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %.2f      %s: %.2f \n",cidade1, pib1, cidade2, pib2);
        printf ("Carta 1 Venceu \n");
        printf("\n");


    }else if (pib1 == pib2 ){

        printf("PIB:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %.2f      %s: %.2f \n",cidade1, pib1, cidade2, pib2);
        printf("Deu Empate!");
        printf("\n");

    } else {

        printf("PIB:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %.2f      %s: %.2f \n",cidade1, pib1, cidade2, pib2);
        printf ("Carta 2 Venceu \n");
        printf("\n");
    }

//Resultado da comparacao de pib

break;

case 4:

    if (npt2 > npt2 ){
        
        printf("Numero de Pontos Turisticos:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d          %s: %d \n",cidade1, npt1, cidade2, npt2);
        printf ("Carta 1 Venceu \n");
        printf("\n");


    }else if (npt1== npt2 ){

        printf("Numero de Pontos Turisticos:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d          %s: %d \n",cidade1, npt1, cidade2, npt2);
        printf ("Deu Empate! \n");
        printf("\n");

    } else {

        printf("Numero de Pontos Turisticos:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %d          %s: %d \n",cidade1, npt1, cidade2, npt2);
        printf ("Carta 2 Venceu \n");
        printf("\n");
    }

//Resultado da comparacao de Numero de pontos Turisticos

break;

case 5:

    if (dencidade1 > dencidade2 ){
        
        printf("Dencidade Demografica:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %.2f          %s: %.2f \n",cidade1, dencidade1, cidade2, dencidade2);
        printf ("Carta 1 Venceu \n");
        printf("\n");


    }else if (dencidade1== dencidade2 ){

        printf("Dencidade Demografica:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %.2f          %s: %.2f \n",cidade1, dencidade1, cidade2, dencidade2);
        printf ("Deu Empate \n");
        printf("\n");


    } else {

        printf("Dencidade Demografica:\n");
        printf("\n");
        printf(" Carta 1: %s        Carta 2: %s \n",cidade1, cidade2);
        printf(" %s : %.2f          %s: %.2f \n",cidade1, dencidade1, cidade2, dencidade2);
        printf ("Carta 2 Venceu \n");
        printf("\n");

    }

//Resultado da comparacao de Numero de Dencidade Demografica

break;

}

    break;

case 2:

    printf(" As Regras do jogo são:\n");

break;

case 3:

    printf("Saindo do jogo:");

break;

default:

    printf("Erro na escolha do menu!");
}

// 
printf("\n");

// final do menu principal


return 0;
}