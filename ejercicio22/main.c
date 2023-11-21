#include <stdio.h>
#include <stdlib.h>

int main()
{
   int edad, magico ,i=0 ,num ,num_asci=0;
   char palabra[100];

    printf("\nEdad: \n");
    scanf("%d",&edad);
    printf("Palabra: \n");
    scanf("%s",&palabra);
    scanf("%d",&magico);

    while(palabra[i] !='\0'){
    if ((palabra[i]>= 'a' && palabra[i]<='z' )|| (palabra[i]>='A' && palabra[i]<='Z'))
        num=palabra[i]- '0';
        num_asci=num_asci*+num;
        i++;
    }
printf("numasci: %d", num_asci);

    return 0;
}
