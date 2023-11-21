#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int i;
    char ch[MAX];

    printf("intrducsa cadena:\n");
    gets(ch);

    for(i=0;ch[i] != '\0'; i++){}

    printf("el tamanio es %s es %d",ch , i);
    return 0;
}
