#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int numero, contador=0;
    bool menu=true;

while(menu){

        printf("\nUn numero positivo: ");
        scanf("%d",&numero);
        if(numero<0){
        printf("ERROR");

        }else{
        while(contador <= numero){
        printf(" %d ", contador);
        contador ++;
        }
        contador=0;
    }
}



    return 0;
}
