#include <stdio.h>
#include <stdlib.h>
#include "func.h"


int sustituye(char frase[MAX], char c){

    switch(c){

        case 'V':
        case 'v':

            sustituye_vocales(frase);
            return 1;
            break;

        case 'C':
        case 'c':

            sustituye_consonantes(frase);
            return 1;
            break;

        case 'L':
        case 'l':

            sustituye_vocales(frase);
            sustituye_consonantes(frase);
            return 1;
            break;

        default:

            printf("ERROR");
            return 0;
            break;

    }

}

void sustituye_vocales(char frase[MAX]){

    int i;

    for(i=0;frase[i]!='\0';i++){


            switch(frase[i]){

                case 'A':
                case 'a':

                    frase[i]='4';
                    break;

                case 'E':
                case 'e':

                    frase[i]='3';
                    break;

                case 'I':
                case 'i':

                    frase[i]='1';
                    break;

                case 'O':
                case 'o':

                    frase[i]='0';
                    break;

                case 'U':
                case 'u':

                    frase[i]='8';
                    break;

        }

    }

}



void sustituye_consonantes(char frase[MAX]){

    int j;

    for(j=0;frase[j]!='\0';j++){

        if(frase[j]!='A' && frase[j]!='a' && frase[j]!='E' && frase[j]!='e' && frase[j]!='I' && frase[j]!='i' && frase[j]!='O' && frase[j]!='o' && frase[j]!='U' && frase[j]!='u'){

            if(frase[j]>'A'&&frase[j]<='Z'){

                frase[j]='+';

            }
            else{

                if(frase[j]>'a'&&frase[j]<='z'){

                    frase[j]='*';

                }

            }

        }

    }

}
