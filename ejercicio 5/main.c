#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num;
  int redondeo;
    printf("\nEscribe un numero real decimal:");
    scanf("%f", &num);

    printf("la parte entera del numero es: %.0f",num);

     if (num >= (int)num + 0.5) redondeo = num + 1;
    else redondeo = num;
    printf("\nEl valor redondeado al entero mas cercano es:: %i\n", redondeo);

    return 0;
}
