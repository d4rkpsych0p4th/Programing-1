#include "header.h"

int aparece(char *frase, char letra){
    int i = 0, Letra = 0;
    while(frase[i] != '\0'){

        if(frase[i] == letra)
            nLetra++;    }
		i++;

        return Letra;
}

void vocales(char *frase, char *vocalmasuno, char *vocalmenos){

    int Letra[5], i = 0, mayor, menor, mayoraux = 0, menoraux = 0;
     letra[0] = aparece(frase, 'a') + aparece(frase, 'A');
     letra[1] = aparece(frase, 'e') + aparece(frase, 'E');
     letra[2] = aparece(frase, 'i') + aparece(frase, 'I');
     letra[3] = aparece(frase, 'o') + aparece(frase, 'O');
     letra[4] = aparece(frase, 'u') + aparece(frase, 'U');
    
    mayor = letra[0];
    menor = letra[0];
    while(i < 5){
        if(letra[i] > mayor){
            mayor = letra[i];
            mayoraux = i;
        }else if(letra[i] < menor){
            menor = letra[i];
            menoraux = i;
        }     
        i++;
    }
    switch(mayoraux){
        case 0:
            *vocalmasuno= 'a';
            break;
        case 1:
            *vocalmasuno= 'e';
            break;
        case 2:
            *vocalmasuno= 'i';
            break;
        case 3:
            *vocalmasuno= 'o';
            break;
        case 4:
            *vocalmasuno= 'u';
            break;
        default:
            break;
    }
        switch(menoraux){
        case 0:
            *vocalmenos= 'a';
            break;
        case 1:
            *vocalmenos= 'e';
            break;
        case 2:
            *vocalmenos= 'i';
            break;
        case 3:
            *vocalmenos= 'o';
            break;   
        case 4:
            *vocalmenos= 'u';
            break;
        default:
            break;
    }
}

int sustituye(char *frase){
    
    int error = 0, i = 0;
    char vocalmasuno = '\0', vocalmenos= '\0';
        vocales(frase, &vocalmasuno, &vocalmenos);
    while(frase[i] != '\0'){
                if(frase[i] == vocalmasuno){
            frase[i] = vocalmenos;
            error = 1;        }else if(frase[i] == vocalmasuno - 32){
            frase[i] = vocalmenos- 32;
            error = 1;
        }
        i++;
    }
    return error;
}
