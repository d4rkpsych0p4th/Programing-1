#include <stdio.h>
#include <stdlib.h>

int main()
{
 float num1, num2, num3;
float resultado, media;

 printf("\nIntroduce el primer numero:");
 scanf("%f", &num1);
 printf("\nIntroduce el segundo numero:");
 scanf("%f", &num2);
 printf("\nIntroduce el tercer numero:");
 scanf("%f", &num3);


 if(num3< 0){
   resultado= num1+num2+num3;
    printf("\nLa suma es %.0f\n", resultado);}
 else{
 media= (num1+num2+num3)/3;
 printf("\nEl promedio es %.2f\n", media);
 }

    return 0;
}
