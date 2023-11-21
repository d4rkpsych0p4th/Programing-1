#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    printf("Ingrese un Caracter: ");
    scanf("%c",&caracter);
    if(caracter >= 'a' && caracter <= 'z')
        printf("\n-> Es minuscula\n ");
    else if(caracter >= 'A' && caracter <= 'Z')
        printf("\n-> Es mayuscula \n");
    else if(caracter >= '48' && caracter <= '57')
        printf("\n-> Es un numero \n");

    else printf("\nEl caracter %c no es un caracter alfanumerico.\n", caracter);


}
