#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap_cadenas(char **x, char **y) {

	char*tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}


void ordenar_cadenas(char **i, char **j, char **k) {

	int resultado;

			resultado = strcmp(*j, *k);
				if (resultado > 0)
				swap_cadenas(j, k);

			resultado = strcmp(*i, *k);
				if (resultado > 0)
				swap_cadenas(i, k);

			resultado = strcmp(*i, *j);
				if (resultado > 0)
					swap_cadenas(i, j);
}

int main() {

	char fr[20], fr2[20], fr3[20], *p1, *p2, *p3;

			p1 = fr;
			p2 = fr2;
			p3 = fr3;
			gets(p1);
			gets(p2);
			gets(p3);

			ordenar_cadenas(&p1, &p2, &p3);

			printf("%s\n", p1);
			printf("%s\n", p2);
			printf("%s\n", p3);


	return 0;




}