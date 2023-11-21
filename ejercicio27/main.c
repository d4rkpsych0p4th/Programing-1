#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char frase[MAX];
    int i;

    printf("mete frase:\n");
    gets(frase);

    for(i=0;frase[i]='\0';i++){
        if(frase[i]<'a' && frase[i]>'z' && frase[i] != ' '){
            printf("%c",frase[i]);
        }
    }




    return 0;
}
