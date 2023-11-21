#include "alvaro_cervera_gallardo_header.h"

	int main(){
    
		char *palabras[10] = {"bola","adios", "sol", "hola", "uno", "una", "loco","moto", "perro","chewbacca"}, opcion;
		int i = 0;
		struct jugador jug;
    
		jug = inicializar_jugador(jug);
    
		do{
        
			jug = ahorcado(jug, palabras[i]);
			i++;
        
			printf("> %s %d %d \n", jug.nombre, jug.vidas, jug.puntos);
        
			if(jug.vidas <= 0) break;
        
			if(i < 10)
				printf("Otra Partida (Si/No)? \n");
			else
				break;
        
			scanf("%c", &opcion);
			getchar();
        
		}while(opcion == 'S');
    
		return 0;
	}
