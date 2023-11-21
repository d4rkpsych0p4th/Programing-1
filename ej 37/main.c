#include "header.h"
#define MAX = 20
int main(){
    
    char cad1[MAX], cad2[MAX], cad3[MAX], cad4[MAX], opcion;
    int ind;
    
    gets(cad1);
    gets(cad2);
    
    scanf("%c", &opcion);
    
    switch(opcion){
        case 'M':
            if(strlen(cad1) < strlen(cad2) || strlen(cad1) == strlen(cad2)){
                ind = mezcla(cad1, cad2, cad3);
                separa(cad3, cad1, cad2, ind);
                printf("%s %d \n", cad3, ind);
                printf("%s %s \n", cad1, cad2);
            }else{
                ind = mezcla(cad2, cad1, cad3);
                separa(cad3, cad2, cad1, ind);
                printf("%s %d \n", cad3, ind);
                printf("%s %s \n", cad2, cad1);
            }
            
            break;
            
        case 'C':
            if(strlen(cad1) < strlen(cad2) || strlen(cad1) == strlen(cad2)){
                cruce(cad1, cad2, cad3, cad4);
            }else{
                cruce(cad2, cad1, cad3, cad4);
            }
            
            printf("%s %s \n", cad3, cad4);
            
            break;
            
        default:
            printf("ERROR \n");
            break;
    }
    
    return 0;
}

