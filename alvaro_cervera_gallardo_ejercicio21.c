#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

 int numero, cont=1;
 bool menu=true;

while(menu){
     cont= 1;
    printf("\n Numero: \n");
    scanf("%d",&numero);

    if(numero<=0){
    printf(" %d ", numero);
    menu=false;
   }else{

        while(cont<=numero){
            if((numero % cont == 0) && (cont % 2 !=0)){
            printf(" %d ", cont);
            cont++;

             }else{

             cont++;
             }

           }

    }
}


    return 0;
}
