#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int num1, num2, num3;
    int *p;
    int *o;
    int *i;

    p=&num1;
    o=&num2;
    i=&num3;
    printf("Numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    transformar_numeros(&num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    return 0;
}
