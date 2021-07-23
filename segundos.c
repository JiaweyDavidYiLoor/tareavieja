#include <stdio.h>



void segundos (int entradasegundos ){
    
    int horas= entradasegundos/3600;
    int minutos= (entradasegundos-(horas*3600))/60;
    int segundos=entradasegundos-(minutos*60+horas*3600);
    printf("Horas    Minutos    Segundos\n");
    printf("  %d        %d         %d   \n", horas ,minutos, segundos);

}
