#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    float num1, num2,sumar,restar,dividir,multiplicar;
    char letra;
    bool seguir=true;
    printf("\nEl primer numero: ");
    scanf("%f",&num1);
    printf("\nEl segundo numero: ");
    scanf("%f",&num2);

    while(seguir){
        printf("\nS: Sumar");
        printf("\nR: Restar");
        printf("\nM: Multiplicar");
        printf("\nD: Dividir");
        printf("\nT: Terminar\n");
        scanf("%s",&letra);

        switch(letra)
        {
        case 's':
            sumar=num1+num2;
            printf("%.0f",sumar);
            break;
        case 'S':
            sumar=num1+num2;
            printf("%.0f",sumar);
            break;
        case 'r':
            restar=num1-num2;
            printf("%.0f",restar);
            break;
        case 'R':
            restar=num1-num2;
            printf("%.0f",restar);
            break;
        case 'm':
            multiplicar=num1*num2;
            printf("%.0f",multiplicar);
            break;
        case 'M':
            multiplicar=num1*num2;
            printf("%.0f",multiplicar);
            break;
        case 'd':
            if(num2==0){
                printf("ERROR");
            }else{
                dividir=num1/num2;
                printf("%.2f",dividir);
            }
            break;
        case 'D':
            if(num2==0){
                printf("ERROR");
            }else{
                dividir=num1/num2;
                printf("%.2f",dividir);
            }
            break;
        case 't':
            seguir=false;
            printf("\nAdios");
            break;
        case 'T':
            seguir=false;
            printf("\nAdios");
            break;
        }
    }
    return 0;
}
