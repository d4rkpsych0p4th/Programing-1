#include <stdio.h>
#include <stdlib.h>
#define NUM 10
int main()
{
    char nombre[50];
    int numsuerte, suma, diferencia, producto,cociente,resultado ;

    printf("\nEscribe tu nombre:");
    gets(nombre);
    printf("\nEscribe tu numero de la suerte:");
    scanf("%d",&numsuerte);
    printf("\nHola %s:",nombre);
    printf("\nLa constante NUM vale: %d", NUM);
    printf("\nTu numero de la suerte es %d:",numsuerte);

    suma = numsuerte + NUM;
    printf("\nSu suma es: %d", suma);

    diferencia = NUM - numsuerte;
    printf("\nSu diferencia es: %d", diferencia);

    producto = NUM * numsuerte;
    printf("\nSu producto es: %d", producto);


    cociente = NUM / resultado;
    printf("\nSu cociente es: %d", cociente);

    return 0;
}
