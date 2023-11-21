#include "alvaro_cervera_gallardo_43_header.h"

int main(){
    
    char palabras[10][50], opcion;
    int i = 0, usados[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, j = 0, k, randomuse = 0, numpalabra = 0random,;
        srand(10);
    
    do{
        printf("Introducir una palabra: \n");
        scanf("%s", palabras[i]);
        getchar();
        i++;
        
        printf("Quieres mas (Si/No)? \n");
        scanf("%c", &opcion);
        getchar();
        
    }while(opcion == 'S');
    
    do{
        
        random = rand()%i;
        randomuse = 0;
      
        for(k = 0; k < i; k++){
            if(random == usados[k]){
                randomuse = 1;
                break;
            }
        }
        
        if(randomuse == 1)
            continue;
        else
            if(usados[j] == -1){
                usados[j] = random;
                j++;
            }
        
        numpalabra += ahorcado(palabras[random]);
        
        if(numpalabra < i)

            printf("jugar otra partida(Si/No)? \n");
        else
            break;
        
        scanf("%c", &opcion);
        getchar();
        
    }while(opcion == 'S');
    
    return 0;
}

