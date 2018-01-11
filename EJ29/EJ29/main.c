#include "header.h"
int main(){
     float a, b, c;
     char letra;

    scanf ("%f", &a);
    getchar();
    scanf ("%f", &b);
    getchar();
    scanf ("%f", &c);
    getchar();
    scanf ("%c", &letra);
    getchar();

 switch (letra){
    case 'c':
    case'C':
        calcular (a,b,c);
        break;
    case 'o':
    case 'O':
        ordenar (a,b,c);
        break;
    case 'n':
    case 'N':
        numerar (a,b,c);
        break;
    case 's':
    case 'S':
        serie (a,b,c);
        break;
    default:
        printf ("ERROR");
        break;

 }
 return 0;
}
