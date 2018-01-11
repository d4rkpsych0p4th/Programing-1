#include <stdio.h>
#define MAX 100
int main(){
    char frase1[MAX], frase2[MAX];
     int vocales1=0,vocales2=0;

     printf("Frase 1:\n");
     gets(frase1);

     printf("Frase 2:\n");
     gets(frase2);

     vocales1 = vocal(frase1);
     vocales2 = vocal(frase2);

     if (vocales1>vocales2)
        printf("Frase con mas vocales: %s\n",frase1);
     else if (vocales2>vocales1)
        printf("Frase con mas vocales: %s\n",frase2);

         else
            printf("TIENEN LAS MISMAS VOCALES\n");

     printf("El numero de palabras y la cantidad de numeros de la frase 1:\n");
     contar(frase1);
     printf("El numero de palabras y la cantidad de numeros de la frase 2:\n");
     contar(frase2);

     printf("Cada palabra de la frase 1 y su numero de caracteres:\n");
     palabras(frase1);
     printf("Cada palabra de la frase 2 y su numero de caracteres:\n");
     palabras(frase2);
     return 0;
}
