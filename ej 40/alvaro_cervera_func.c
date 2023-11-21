#include "alvaro_cervera_header.h"

float *crear(int inicio, int fin, float paso){
    
    float *pasos;
    int size = (fin - inicio)/paso;
    pasos = (float *) malloc((size+1)*sizeof(float));
 
   return pasos;
 }

void inicializar(int fin, float paso,int inicio,  float *pasos){
    int i, size = (fin - inicio)/paso + 1, n = inicio;
    
     for(i = 0; i < size; i++){
        n += paso; //n ?= n + paso;
        pasos[i] = n;
    }
}


   float media(float *pasos){
    
    int i;
    float suma = 0, total = 0, resultado;

    for(i = 0; pasos[i] != '\0'; i++){
        
		suma += pasos[i];
           total++;
    }
    return resultado = suma/total;
}

void liberar(float *pasos){
        free(pasos);
}

