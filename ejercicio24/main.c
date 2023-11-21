#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{
    int array[MAX],i=0,sum,sum2,sum3;

    printf("\n10 numeros:\n");


        for(i=0; i<MAX; i++){

            scanf("%d",&array[i]);

            if(array[i]== 999){

                printf("SALIDA INTERRUMPIDA");

                return 0;
            }

        }

         if(array[9]<0){

            sum=array[1]+array[3]+array[5]+array[7]+array[9];
            printf("Resultado=%d",sum);
        }
        else if(array[9]>0 ){

            sum2= array[0]+array[2]+array[4]+array[6]+array[8];
            printf("Resultado=%d\n",sum2);
        }
        else if(array[9]==0 ){

            sum3= array[0]+array[1]+array[2]+array[3]+array[4]+array[5]+array[6]+array[7]+array[8]+array[9];
            printf("Resultado=%d\n",sum3);
        }




    return 0;
}
