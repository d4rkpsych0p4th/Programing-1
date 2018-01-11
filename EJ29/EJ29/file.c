#include "header.h"

void calcular (float a, float b, float c)
{
    float suma;
    suma= a+b+c;
    if (c<0)
        printf ("%.2f", suma);
    else
        printf ("%.2f", (suma/3));
}

void ordenar (float a, float b, float c)
{
    float MAX, MIN, MED;
    MAX = (a > b)?((a > c)?a:c):((b > c)?b:c);
    MIN = (a < b)?((a < c)?a:c):((b < c)?b:c);
    MED = (a + b + c - MAX - MIN);
    printf("%0.2f  %0.2f  %0.2f", MAX, MED, MIN);
}
void numerar (float a, float b, float c)
{
int contador =0;
    if (a>=0){
        while (contador <=a){
        printf ("%d ", contador);
        contador++;
            }
        printf ("\n");
    }else{
        printf ("ERROR\n");}
    contador=0;
    if (b>=0){
        while (contador <=b){
        printf ("%d ", contador);
        contador++;
            }
        printf ("\n");
    }else{
        printf ("ERROR\n");}
    contador=0;
    if (c>=0){
        while (contador <=c){
        printf ("%d ", contador);
        contador++;
            }
    }else
        printf ("\nERROR\n");

}
void serie (float a, float b, float c)
{
    int serie=3;
    float d;
    printf("%.2f %.2f %.2f ", a, b, c);
	while (serie<10)
    {
	d= b+a-c;
	printf("%.2f ",d);
    a=b;
    b=c;
	c=d;
	serie=serie+1;
	}

}
