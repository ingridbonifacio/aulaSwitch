#include <stdio.h>

main(){

    int DDD;
   
   printf ("Digite o DDD da sua cidade: ");
   scanf  ("%d", &DDD);
   
   // Estrutura Switch Case

   switch (DDD){
case 61:
    printf ("\nBrasilia");
    break;
case 71:
    printf ("\nSalvador");
    break;
case 11:
    printf ("\nSão Paulo");
    break;
case 21:
    printf ("\nRio de Janeiro");
    break;
case 32:
    printf ("\nJuiz de Fora");
    break;
case 19:
    printf ("\nCampinas");
    break;
case 27:
    printf ("\nVitoria");
    break;
case 31:
    printf ("\nBelo Horizonte");
    break;
   default:
   printf ("\nO numero nao e correspondente a um número de DDD valido do nosso sistema!");
    return 0;
      }
}
