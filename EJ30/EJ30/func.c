#include "header.h"

int vocal (char frase[])
{

    int vf1=0,i;
    for(i=0;frase[i]!='\0';i++){
        if (frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'||frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U')
            vf1=vf1+1;
    }
    return i;
}
void contar (char frase[])
{
    int i, numero=0, palabras=0, en_numero = NO, en_palabra=NO;
    for (i=0; frase[i] != '\0'; i++){
        if (frase[i]==' '){
            en_numero=NO;
            en_palabra=NO;
        }

        if (frase[i]>= '0' && frase[i] <= '9'){
            if (en_palabra==NO && en_numero==NO){
                en_numero= SI;
                numero++;
                }
        }

        if((frase[i]>= 65 && frase[i] <= 90) || (frase[i]>= 97 && frase[i] <= 122)){
            if (en_palabra==NO && en_numero==NO){
                en_palabra=SI;
                palabras++;
                }
            if (en_numero==SI){
                en_numero=NO;
                en_palabra=SI;
                numero--;
                palabras++;
            }
        }
    }
    printf("%d %d\n", palabras,numero);
}
void palabras (char frase[])
{
    int i, letra = NO;
    for (i=0; frase [i]!='\0'; i++){
        if (frase[i]!=' '){
            letra == SI;
            letra++;
            printf ("%c", frase [i]);
        }
        else{
            if (letra!=0)
                printf(" %d\n", letra);
                    letra=0;
        }
    }
     if (letra!=0)
        printf(" %d\n", letra);
        letra=0;
}
