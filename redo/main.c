#include <stdio.h>
#define año 2017
#define pi 3,14
int main()                           //deberia haber un int delante
{
int radio;
float area;          // la variable float no puede ir con tilde
radio = 3;                      // la variable Radio no esta definida Radio
radio = radio * radio;        // la variable no esta definida 2radio y la multiplicacion es con *
pi = pi * radio;              //la variable PI no esta definida deberia ser pi
area = pi;                     //la variable Área no esta definida y no se puede poner tilde, PI tampoco esta definida
printf("el radio del circulo es %d\n", radio); //la variable Radio no esta definida
printf("el area del circulo es %d\n", area);   //la variable Área no esta definida y deberia der %f
printf("programa realizado en %d\n", año);

    return 0;
}
