#include <stdio.h>
#include <stdlib.h>

int main()
{
 float faren,celsius,constante=1.8;
    printf("\n Escriba el grado en Fahrenheit 1: ");
    scanf("%f",&faren);

    celsius=(faren-32)/(constante);

    printf("\n En Celsius: %.2f\n",celsius);

    return 0;
}
