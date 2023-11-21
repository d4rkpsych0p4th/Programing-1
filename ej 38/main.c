#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

        int num[300], cant[10] = {0}, i, j;
        
srand((unsigned) time(NULL));
    
    for(i = 0; i < 300; i++){
        num[i] = rand()%10;
    }
    
    for(i = 0; i < 10; i++){

        for(j = 0; j < 300; j++){
            
            if(i == num[j]){
                cant[i]++;
            }
        }
    }
       
 for(i = 0; i < 10; i++){

        printf("%d| ", i);

        for(j = 0; j < cant[i]; j++){

            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

