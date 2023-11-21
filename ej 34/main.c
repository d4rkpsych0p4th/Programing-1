#include "header.h"

int main(){
       char frase[MAX];
        printf("Frase: \n");
        gets(frase);
        if(sustituye(frase) == 1){
        printf("%s \n", frase);

        }else{
        printf("ERROR \n");
    }
    
    return 0;
}
