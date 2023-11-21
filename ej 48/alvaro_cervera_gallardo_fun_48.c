#include "alvaro_cervera_gallardo_header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct jugador inicializar_jugador(struct jugador jug){
    
    printf("como te llamas ? \n");

    scanf("%s", jug.nombre);
    getchar();
    jug.vidas = 5;
    jug.puntos = 0;
    
    return jug;
}

struct jugador ahorcado(struct jugador jug, char palabra[]){
    
    int i, letraacertada, ganar, letrause;
    char letra, adivinar[50] = "----------------------";
    
    do{
        
        letraacertada = 0, ganar = 1, letrause = 0;
        
        printf("Adivinar: ");
        
        for(i = 0; palabra[i] != '\0'; i++){
            printf("%c", adivinar[i]);
        }
        
        printf("\nVidas y puntos %d %d \nLetra? \n", jug.vidas, jug.puntos);
        
        scanf("%c", &letra);
        getchar();
        
        for(i = 0; palabra[i] != '\0'; i++){
            if(letra == adivinar[i]){
                letrause = 1;
                break;
            }
            if(letra == palabra[i]){
                adivinar[i] = palabra[i];
                letraacertada = 1;
            }
            
            if(adivinar[i] != palabra[i]){
                ganar = 0;
            }
        }
        
        if(letrause == 1) continue;
        
        if(letraacertada == 1){
            
        
            jug.puntos++;
            if(jug.puntos%5 == 0){
                jug.vidas++;
            }
            
            if(ganar == 1){
                printf("Has ganado! \nLa palabra: %s \n", palabra);
                return jug;
            }
            
            printf("Has acertado! \n");
            
        }else{
            
            printf("Has fallado! \n");
            jug.vidas--;
            
            if(jug.vidas == 0){
                printf("Has perdido! \nLa palabra: %s \n", palabra);
                return jug;
            }
        }
        
    }while(jug.vidas > 0);
    
    return jug;
}

