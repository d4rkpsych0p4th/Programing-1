#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int main()
{
    int i,j;

    for(i=1;i <=  MAX;i++){
        for(j=1; j<= MAX;j++){
    if (i==1 || i== MAX ||  j==1 || j==MAX){
        printf("*");
        }else{
        printf(" ");
        }
    }
  printf("\n");
}


    return 0;
}
