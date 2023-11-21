#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,numero,resultado;
      printf( "\n Introduce un numero entero: " );
        scanf( "%d", &numero );

        for ( i = 0 ; i <= 10 ; i++ ){
            resultado = i*numero;
            printf( "\n %d * %d = %d", i, numero, resultado );

        }

    return 0;
}
