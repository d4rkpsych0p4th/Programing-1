#include "header.h"

int mezcla(char cad1[], char cad2[], char cad3[]){
    
    int j,i , ii = 0;
    
    for(i = 0, j = 0; cad1[i] != '\0'; i++, j+=2){
        cad3[j] = cad1[i];
        cad3[j+1] = cad2[i];
        ind+=2;
    }
    
    j = ii;
    
    for(i = strlen(cad1); i < strlen(cad1) + strlen(cad2); i++){
        cad3[j] = cad2[i];
        j++;
    }
        cad3[j] = '\0';
    
    return ii;
}






void separa(char cad1[], char cad2[], char cad3[], int ii){
    
    int i, j = 0, k = 0;
    
    for(i = 0; i < ind; i++){
        if(i%2 == 0){
            cad2[j] = cad1[i];
            j++;
        }else{
            cad3[k] = cad1[i];
            k++;
        }
    }
    
    j = strlen(cad2);
    
    for(i = ii; i < strlen(cad1) + strlen(cad2); i++){
        cad3[j] = cad1[i];
        j++;
    }
    
}



void cruce(char cad1[], char cad2[], char cad3[], char cad4[]){
    
    int cross = strlen(cad1)/2, i;
    
    for(i = 0; i < cross; i++){
        cad3[i] = cad1[i];
        cad4[i] = cad2[i];
    }
    for(i = cross; i < strlen(cad2); i++){
        cad3[i] = cad2[i];
        if(i < strlen(cad1))
            cad4[i] = cad1[i];
        else
            cad4[i] = '\0';
    }
    cad3[i] = '\0';
    cad4[i] = '\0';
    
}

