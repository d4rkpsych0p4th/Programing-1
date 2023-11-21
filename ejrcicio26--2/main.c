#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main()
{
            char frase[MAX];
            int i,j=0,num=0,espacio=0,palabra=0;
        printf("Frase:\n");
        gets(frase);

        for(i=0;frase[i] != '\0'; i++){
            if( frase[i] != ' ' && espacio!=0){
                printf(" %d\n",num);
                palabra=0;
                espacio=0;
            }else if(frase[i]== ' ' && espacio==0){
                espacio=0;

            }
            else{
                printf("%c",frase[i]);
                palabra++;
                espacio=1;
            }

        }
        if(palabra!=0)
        printf(" %d",palabra);


        return 0;
}

