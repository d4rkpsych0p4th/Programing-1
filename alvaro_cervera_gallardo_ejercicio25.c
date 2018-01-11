#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
        char frase1[MAX],frase2[MAX];
        int vocal = 0,i , vocal2 = 0 ;
    printf("Frase 1:\n");
    gets(frase1);
    printf("Frase 2:\n");
    gets(frase2);

    for(i=0;i<strlen(frase1);i++){
        if(frase1[i]=='a' || frase1[i]=='e'|| frase1[i]=='i'|| frase1[i]=='o'|| frase1[i]=='u' || frase1[i]=='A' || frase1[i]=='E'|| frase1[i]=='I'|| frase1[i]=='O'|| frase1[i]=='U')
        {vocal++;
        }
    }

    for(i=0;i<strlen(frase2);i++){
        if(frase2[i]=='a' || frase2[i]=='e'|| frase2[i]=='i'|| frase2[i]=='o'|| frase2[i]=='u' || frase2[i]=='A' || frase2[i]=='E'|| frase2[i]=='I'|| frase2[i]=='O'|| frase2[i]=='U')
        {vocal2++;
        }
    }

    if(vocal>vocal2){
        printf("Frase con mas vocales: %s",frase1);
    }
    else if (vocal<vocal2){
        printf("Frase con mas vocales: %s", frase2);
    }
    else if (vocal == vocal2){
        printf("TIENEN LAS MISMAS VOCALES");
    }


    return 0;
}
