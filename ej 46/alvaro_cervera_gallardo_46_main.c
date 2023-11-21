#include <stdio.h>

struct fecha{
    
    int dia;
    int mes;
    int ano;
    
};

int rellenar(struct fecha *puntfech){
    
    do{
        
      scanf("%d/%d/%d", &(puntfech->dia), &(puntfech->mes), &(puntfech->ano));
        
        if(puntfech->dia <= 0 || puntfech->dia > 30 ||
           puntfech->mes <= 0 || puntfech->mes > 12 ||
           puntfech->ano <= 0){
            return 1;
        }
        
    }while(puntfech->dia <= 0 || puntfech->dia > 30 ||
           puntfech->mes <= 0 || puntfech->mes > 12 ||
           puntfech->ano <= 0);
    
    return 0;
}

struct fecha manana(struct fecha puntfech){
        if(puntfech.dia + 1 == 31){
			puntfech.dia = 01;
        
        if(puntfech.mes + 1 == 13){
			puntfech.mes = 01;
			puntfech.ano++;
            
        }else{
			puntfech.mes++;
        }
    }else{
			puntfech.dia++;
    }
    
    return puntfech;
}

int main(){
    
    struct fecha fechmain;
    int error;
    
    error = rellenar(&fechmain);
    
    if(error == 1) printf("ERROR \n");
    
   
 printf("Hoy es: %02d/%02d/%04d \n", fechmain.dia, fechmain.mes, fechmain.ano);
    
    fechmain= manana(fechmain);
    
    printf("manana es: %02d/%02d/%04d \n", fechmain.dia, fechmain.mes, fechmain.ano);
    
    return 0;
}

