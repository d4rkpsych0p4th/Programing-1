#include <stdio.h>
#define ejemplo "chewbacca"

void ahorcado(char palabra[]){
    

    int vidas = 5, i, letraAcertada, ganar;
    
    char letra, adivinar[50] =     
    do{
        
        letraAcertada = 0, ganar = 1;
        
        printf("Adivinar: ");
    
    	    for(i = 0; palabra[i] != '\0'; i++){
            printf("%c", adivinar[i]);
        }
        
        printf("\nVidas %d \nLetra? \n", vidas);
        
        scanf("%c", &letra);
        getchar();
        
        for(i = 0; palabra[i] != '\0'; i++){
            if(letra == palabra[i]){
                adivinar[i] = palabra[i];
                letraAcertada = 1;
            }
            if(adivinar[i] != palabra[i]){
                ganar = 0;
            }
        }
		if(letraAcertada == 1){
           	 if(ganar == 1){
                printf("Has ganado! \nLa palabra: %s \n", 				palabra);
                break;
            }
            
            printf("Has acertado! \n");
        }else{
            printf("Has fallado! \n");
            vidas--;
            
            if(vidas == 0){
                printf("Has perdido! \nLa palabra: %s \n", palabra);
                break;
            }
        }
        
    }while(vidas > 0);
    
}

int main(){
      
    ahorcado(ejemplo);
    
    return 0;
}

