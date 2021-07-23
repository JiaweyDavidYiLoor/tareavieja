#include <stdio.h>


void dias(int entradadias){
   int anios = entradadias/360;
   int meses = (entradadias -(anios*360))/30;
   int dias=entradadias-((meses*30)+(anios*360));
   printf("Años       Meses       Dias\n");
   printf("  %d         %d         %d   \n", anios ,meses, dias);


   
   
  

}