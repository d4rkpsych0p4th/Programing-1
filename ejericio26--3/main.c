#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
              char frase[MAX];
            int i,j=0,num=0;

        gets(frase);

        for(i=0;frase[i] != '\0'; i++){
            if( frase[i] == ' ' && j!=0){
                printf(" %d \n",num);
                num=0;
                j=0;
            }else if(frase[i]== ' ' && j==0){
                j=0;

            }
            else{
                printf("%c",frase[i]);
                num++;
                j=1;
            }

        }
        if(num!=0)
        printf(" %d",num);


        return 0;
}
