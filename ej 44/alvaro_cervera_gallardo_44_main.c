#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **tableroinicio(int N){

    char **tablero = (char **) malloc(N*sizeof(char*));
    
    int i, j;
    
    for(i = 0; i < N; i++){
        tablero[i] = (char *) malloc(N*sizeof(char));
    }
        for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            tablero[i][j] = ' ';
        }
    }
    
    return tablero;
}

int compruebarelleno(char **tablero, int N){
    
    int i, j;
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(tablero[i][j] == ' '){
                return 0;
            }
        }
    }
    
    return 1;
}

int compruebamovimiento(char **tablero, int N, int fila, int columna){
    
    if(tablero[fila][columna] == ' ' && fila >= 0 && fila < N && columna >= 0 && columna < N){
        return 1;
    }
    
    return 0;
}

void realizamovimiento(char **tablero, int fila, int columna, char jugador){
   
    tablero[fila][columna] = jugador;
}

int compruebaraya(char **tablero, int N, int K, char jugador){
    
    int i, j, h, numK = 0;
    
	    for(i = 0; i < N; i++){
         for(j = 0; j < N; j++){
            if(tablero[i][j] == jugador){
                
                numK = 0;
                
                for(h = 0; h < K; h++){
                    if(i+h < N){
                        if(tablero[i+h][j] != jugador){
                            numK = 0;
                            break;
                        }else numK++;
                    }
                }
                
                if(numK == K) return 1;
                else numK = 0;
                
                for(h = 0; h < K; h++){
                    if(j+h >= 0){
                        if(tablero[i][j+h] != jugador){
                            numK = 0;
                            break;
                        }else numK++;
                    }
                }
                
                if(numK == K) return 1;
                else numK = 0;
                
                for(h = 0; h < K; h++){
                    if(i+h < N && j+h < N){
                        if(tablero[i+h][j+h] != jugador){
                            numK = 0;
                            break;
                        }else numK++;
                    }
                }
                
                if(numK == K) return 1;
                else numK = 0;
                
                for(h = 0; h < K; h++){
                    if(i-h >= 0 && j+h < N){
                        if(tablero[i-h][j+h] != jugador){
                            numK = 0;
                            break;
                        }else numK++;
                    }
                }
                
                if(numK == K) return 1;
                else numK = 0;
                
            }
        }
    }
    
    return 0;
}

void liberartablero(char **tablero, int N){
    
    int i;
    
    for(i = 0; i < N; i++)
        free(tablero[i]);
        free(tablero);
    
}

void imprimetablero(char **tablero, int N)
{
    int i, j;
    printf("\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("|%c|", tablero[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main()
{
    char **tablero;
    int K, tam;
    char jugador = 'X'; 
    int fila, columna;
    int enraya = 0;
    
    printf("tamanio del tablero: \n");
    scanf("%d", &tam);
    do {
        printf("el valor K: \n");
        scanf("%d", &K);
    } while (K > tam || K < 1);
    
    tablero = tableroinicio(tam);
    
    while (!compruebarelleno(tablero, tam))
    {
        printf("Jugador %c elige la posicion del tablero\n", jugador);
        printf("Fila: \n");
        scanf("%d", &fila);
        printf("Columna: \n");
        scanf("%d", &columna);
        if (compruebamovimiento(tablero, tam, fila, columna))
        {
            realizamovimiento(tablero, fila, columna, jugador);
            imprimetablero(tablero, tam);
            enraya = compruebaraya(tablero, tam, K, jugador);
            
            if (enraya) break;
            
            if (jugador == 'X') jugador = 'O';
            else jugador = 'X';
        }
        else printf("ERROR\n");
    }
    
    if (enraya)
        printf("Ganador el jugador %c\n", jugador);
    else
        printf("empate\n");
    
    liberartablero(tablero, tam);
    return 0;
}



