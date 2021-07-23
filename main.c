#include<stdio.h>
#include "utilfecha.h"
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    char opt;
    int parametro;
    int a;
    int b;
    int x=0;
  
    
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
            
            //aqui algo esta mal :(
            case 'f':;
            char y = *optarg;
            fecha(y);
            break;
            

            default:
            printf("Opcion invalida\n");
            break;
        }    
    return 0;
    }
}
