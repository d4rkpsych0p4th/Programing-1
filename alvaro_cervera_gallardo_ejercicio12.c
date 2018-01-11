#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero1, numero2, numero3, aux;
	numero1 = numero2 = numero3 = aux = 0;

	printf("\nVamos a Ordenar tres numeros de menor a mayor introducidos por el usuario ");

	printf("\n\nInserte el primer numero:");
	scanf("%d", &numero1);

	printf("\nInserte el segundo numero:");
	scanf("%d", &numero2);

	if (numero1 > numero2)
	{
		aux = numero2;
		numero2 = numero1;
		numero1 = aux;
	}

	printf("\nInserte el tercer numero:");
	scanf("%d", &numero3);

	if (numero2 > numero3)
	{
		aux = numero2;
		numero2 = numero3;
		numero3 = aux;
	}

	if (numero1>numero2)
	{
		aux = numero1;
		numero1 = numero2;
		numero2 = aux;
	}

	printf("\n\n\tLos numeros ordenados de mayor a menor son: %d %% %d %% %d\n\n", numero3, numero2, numero1);

}
