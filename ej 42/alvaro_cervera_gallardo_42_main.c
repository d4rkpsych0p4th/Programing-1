

#include <string.h>
#include <stdio.h>
#define ejemplo "chewbacca"

void ahorcado(char palabra[]){
    
    int  letracorrecta, ganar,i,  j = 0, letrausadasvida = 5,;
    
    char letra, adivinar[50] = usadas[25];
    
    for(i = 0; i < 26; i++){
        usadas[i] = '\0';
    }
    
    do{
        
        letracorrecta= 0, ganar = 1, letrauso = 0;
        
        printf("Adivinar: ");
        

        for(i = 0; palabra[i] != '\0'; i++){
            printf("%c", adivinar[i]);
        }
        
        printf("\nVidas %d \nLetra? \n", vidas);
        
        scanf("%c", &letra);
        getchar();
        	

        for(i = 0; i < 26; i++){
            
            if(usadas[i] == '\0')
                break;
            
            if(letra == usadas[i]){
                letrauso = 1;
                break;
            }
        }
        
        if(letrauso == 0){
            usadas[j] = letra;
            j++;
            usadas[j] = '\0';
        }
        

        if(letrauso == 0){

            for(i = 0; palabra[i] != '\0'; i++){
                if(letra == palabra[i]){
                    adivinar[i] = palabra[i];
                    letracorrecta= 1;
                }
                if(adivinar[i] != palabra[i]){
                    ganar = 0;
                }
            }
            
            if(ganar == 1){
                printf("Has ganado! \nLa palabra: %s \n",
			palabra);
                break;
            }else if(vidas == 0){
                printf("Has perdido! \nLa palabra: %s \n", 				palabra);
                break;
            }
            
            if(letracorrecta== 1){
                printf("Has acertado! \n");
            }else{
                printf("Has fallado! \n");
                vidas--;
            }
        }
        
    }while(vidas > 0);
    
}

int main(){
    
    ahorcado(ejemplo);
    
    return 0;
}

