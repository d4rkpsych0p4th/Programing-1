#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a1, a2, a3, i=7,a4 ;
   printf("Dame tres numeros\n ");
   scanf("%f",&a1);
   scanf("%f",&a2);
   scanf("%f",&a3);
   printf(" %.0f %.0f %.0f",a1,a2,a3);
   while(i>0)
  {
   a4=a1+a2-a3;
   a1=a2;
   a2=a3;
   a3=a4;
    printf(" %.0f",a4);
    i--;
   }

    return 0;
}
