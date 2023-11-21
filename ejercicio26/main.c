#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
        char frase[MAX], palabra[MAX];
        int letras = 0,i,j,k=0;
    printf("Frase:\n");
    gets(frase);

    for(i=0;frase[i] != '\0';i++){
    if(frase[i] != ' '){
    printf("%d",frase[i]);
            letras++;
            k++;
       }else if (frase[i]==' ' && frase[i-1]!=' '){
             printf(" %d\n",letras);
             palabra[i]=0;


        }
    }

    return 0;
}
