#include "alvaro_cervera_header.h"

int main(){
    
    int inicio, fin;
    float paso, *pasos;
    
    do{
        
        scanf("%d %d %f", &inicio, &fin, &paso);
        
        if(fin < inicio || paso <= 0)
            printf("ERROR \n");
        
    }while(fin < inicio || paso <= 0);
    
    
    pasos = crear(inicio, fin, paso);
    
    inicializar(inicio, fin, paso, pasos);

    printf("%.2f \n", media(pasos));
    
    liberar(pasos);
    
    return 0;
}

