#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fecha (char *entradafecha){
    char *meses[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    char *token1 = strtok(entradafecha, " ");
    char  *datos[2];
    int i=0;
    while (token1 != NULL) {
        datos[i]=token1;
        token1 = strtok(NULL, " ");
        i++;
    }
    char  *fecha[3];
    char *token2 = strtok(datos[0], "-");
    i=0;
    while (token2 != NULL) {
        fecha[i]=token2;
        token2 = strtok(NULL, "-");
        i++;
    }
    int indiceFecha=atoi(fecha[1])-1;

    printf("%s de %s de %s, %s \n", fecha[2], meses[indiceFecha], fecha[0], datos[1]);

}
