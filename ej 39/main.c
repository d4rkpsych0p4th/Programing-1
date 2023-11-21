#include <string.h>
#include <stdio.h>


void swap_cadena(char **x, char **y){

    char *tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void ordenar_cadena(char **a,  char **b, char **c){
    
        if((strcmp(*a, *b) < 0) && (strcmp(*a, *c) < 0)){    }	else if((strcmp(*a, *b) > 0) && (strcmp(*b, *c) < 0)){
        swap_cadena(a, b);
    }else if((strcmp(*a, *c) > 0) && (strcmp(*b, *c) > 0)){
        swap_cadena(a, c);
    }
        if((strcmp(*a, *b) > 0) && (strcmp(*a, *c) > 0)){
        swap_cadena(a, c);
    }else if((strcmp(*a, *b) < 0) && (strcmp(*b, *c) > 0)){
        swap_cadena(b, c);
    }else if((strcmp(*a, *c) < 0) && (strcmp(*b, *c) < 0)){
        
    }
    
}

int main(){
    
    char a[100], b[100], c[100];
    char *pa=a,*pb=b,*pc=c;
    
    gets(pa);
    gets(pb);
    gets(pc);
    
    ordenar_cadena(&pa, &pb, &pc);
    
    printf("%s %s %s \n", pa, pb, pc);
    
    return 0;
}
