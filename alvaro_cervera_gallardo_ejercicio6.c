#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;

    printf( "\n   Introduzca un numero entero positivo: ", 163 );
    scanf( "%d", &numero );
if (numero < 0)
 printf("El numero no es positivo\n\n");
else
    if ( numero % 2 == 0 )
        printf( "\n   ES PAR\n\n" );
    else
        printf( "\n   ES IMPAR\n\n" );

}
