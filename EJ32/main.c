#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    float *a=&x,*b=&y,*c=&z;
    char letra;
    scanf("%f %f %f",&x,&y,&z);
    getchar();
    scanf("%c", &letra);
    if(letra=='d' ||letra=='D'){
        girar(&x,&y,&z);
        printf("%.2f %.2f %.2f",x,y,z);
    }
    else if(letra=='i'||letra=='I'){
         girar2(&x,&y,&z);
         printf("%.2f %.2f %.2f",x,y,z);
    }
    else{
        printf("ERROR");
    }
    return 0;
}
