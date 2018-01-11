#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    char frase[MAX];
    char caracter;
    int aux;

    printf("Frase:\n");
    gets(frase);

    printf("Opcion:\n");
    scanf("%c", &caracter);
    getchar();

    aux=sustituye(frase, caracter);

    if (aux==1){

        printf("%s", frase);

    }

    return 0;
}
