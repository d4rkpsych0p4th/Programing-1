#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define PI "palindromo"

void ahorcado() {

		char palabra[20], opcion;
		int vidas = 5, i, cont = 0, cont2 = 0;

		cont = strlen(PI);
		for (i = 0; i < cont; i++) {
			palabra[i] = '-';
		}
		palabra[i] = '\0';

		while ((vidas > 0)) {
			cont2 = 0;
			printf("Adivinar: %s\nVidas %d\nletra?\n", palabra, vidas);
			scanf("%c", &opcion);
			getchar();

			for (i = 0; i < strlen(PI); i++) {

				if (PI[i] == opcion) {
					palabra[i] = opcion;
					cont2 = 1;
				}


			}if (strcmp(PI, palabra) == 0) {
				printf("Has ganado!\n");
				printf("La palabra es: %s\n", PI);
				return;
			}
			if (cont2 == 1) {
				printf("Has acertado!\n");

			}
			else {
				vidas--;
				printf("Has fallado!\n");

			}
		}
		printf("Has perdido!\n");
		printf("La palabra es: %s\n", PI);
		return;
	}
	int main() {

		ahorcado();

		return 0;

	}
