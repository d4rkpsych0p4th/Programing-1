#include <stdio.h>
#include <stdlib.h>

int main()
{
 int numero=0, aux=1, par=0, impar=0;
do
{
 printf("Dame numero Positivo: ");
 scanf("%d",&numero);

if(numero>0)
  aux=aux*numero;
if(numero%2==0)
 par++;

 else
impar++;

 }
while(numero != 0);



printf("%d %d %d",aux, par, impar);

    return 0;
}
