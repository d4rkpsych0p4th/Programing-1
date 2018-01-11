#include "header.h"
int girar(float *a,float *b,float *c){

    float ayuda;

    ayuda=*c;
    *c=*b;
    *b=*a;
    *a=ayuda;

}
int girar2(float *d,float *e,float *f){

    float ayuda;

    ayuda=*d;
    *d=*e;
    *e=*f;
    *f=ayuda;

}
