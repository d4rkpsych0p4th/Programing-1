#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num1, num2, multiplicacion, suma;

    printf("\nEscriba el numero 1: " );
    scanf("%d", &num1);
    printf("\nEscriba el numero 2: ");
    scanf("%d", &num2);

   if (num1 % 2==0 && num1 %3==0 && num2 % 2==0 && num2 %3==0)
      multiplicacion=num1*num2;
      printf(" El resultado es : %d", multiplicacion);

   else if ((num1 % 2==0 && num1 %3==0) || (num2 % 2==0 && num2 %3==0))
     suma= num1 +num2;
     printf("El resultado es: %d", suma);
  else
      printf("ERROR");

    return 0;
}
