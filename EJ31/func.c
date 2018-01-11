#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void transformar_numeros(int *a, int *b, int *c){
    int aux;
    aux=*c;

    *b=*a+*c;
    *a=aux;
    *c=(*c)*2;
}
