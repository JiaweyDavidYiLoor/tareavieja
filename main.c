#include<stdio.h>
#include "utilfecha.h"
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

int main(int argc, char *argv[])
{
    if(argc<2){
		printf("No hay suficientes argumentos");
	}

    int opt;
    int x=0;
    char *y=NULL;
    
    while((opt=getopt(argc,argv,"s:d:f:"))!=-1)
    {
        
    switch(opt)
        {
            case's':
            x= atoi(optarg);
            segundos(x);
            break;
            
            case 'd':
            x=atoi(optarg);
            dias(x);
            break;
            
            case 'f':;
            y= optarg;
            fecha(y);
            break;
            

            default:
            printf("Opcion invalida\n");
            break;
        }    
    return 0;
    }
}
