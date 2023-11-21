#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero, contador=0;
   printf("Dime un numero positivo: ");
   scanf("%d",&numero);
   while(contador <= numero){
   printf(" %d ", contador);
   contador ++;
   }
   printf("ERROR\n");




    return 0;
}
