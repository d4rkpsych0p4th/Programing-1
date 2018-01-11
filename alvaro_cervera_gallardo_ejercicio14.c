#include<stdio.h>

int main()
{
	char jugador1, jugador2;

	printf("\nElige jugador 1:");
	scanf("%c", &jugador1);
	printf("Elige jugador 2:");
	scanf("\n%c", &jugador2);

	switch (jugador1)
	{

	case 'p':
		switch (jugador2)
		{
		case 'p':
			printf("Emapate\n");
			break;
		case'r':
			printf("Gana el jugador 1\n");
			break;
		case't':
			printf("Gana el jugado 2\n");
			break;
		case'l':
			printf("Gana el jugador 1\n");
			break;
		case's':
			printf("Gana el jugador 2\n");
			break;
		default:
			printf(" no corresponde a la vocal de juego introduzca p:papel r:piedra t:tijeras l:lagarto s:spok\n");
			break;
		}
		break;

	case 'r':
		switch (jugador2)
		{
		case 'p':
			printf("Gana el jugador 2\n");
			break;
		case'r':
			printf("Empate\n");
			break;
		case't':
			printf("Gana el jugador 1\n");
			break;
		case'l':
			printf("Gana el jugador 2\n");
			break;
		case's':
			printf("Gana el jugador 2\n");
			break;
		default:
			printf(" no corresponde a la vocal de juego introduzca p:papel r:piedra t:tijeras l:lagarto s:spok\n");
			break;
		}
		break;

	case 't':
		switch (jugador2)
		{
		case 'p':
			printf("Gana el jugador 1\n");
			break;
		case'r':
			printf("Gana el jugador 2\n");
			break;
		case't':
			printf("Empate\n");
			break;
		case'l':
			printf("Gana el jugador 1\n");
			break;
		case's':
			printf("Gana el jugador 2\n");
			break;
		default:
			printf(" no corresponde a la vocal de juego introduzca p:papel r:piedra t:tijeras l:lagarto s:spok\n");
			break;
		}
		break;

	case 'l':
		switch (jugador2)
		{
		case 'p':
			printf("Gana el jugador 1\n");
			break;
		case'r':
			printf("Gana el jugador 2\n");
			break;
		case't':
			printf("Gana el jugador 2\n");
			break;
		case'l':
			printf("Empate\n");
			break;
		case's':
			printf("Gana el jugador 1\n");
			break;
		default:
			printf(" no corresponde a la vocal de juego introduzca p:papel r:piedra t:tijeras l:lagarto s:spok\n");
			break;

		}
		break;

	case 's':
		switch (jugador2)
		{
		case 'p':
			printf("Gana el jugador 2\n");
			break;
		case'r':
			printf("Gana el jugador 1\n");
			break;
		case't':
			printf("Gana el jugador 1\n");
			break;
		case'l':
			printf("Gana el jugador 2\n");
			break;
		case's':
			printf("Empate\n");
			break;
		default:
			printf(" no corresponde a la vocal de juego introduzca p:papel r:piedra t:tijeras l:lagarto s:spok\n");
			break;
		}
		break;

	default:
		printf(" no corresponde a la vocal de juego introduzca p:papel r:piedra t:tijeras\n l:lagarto s:spok\n");
		break;

	}


}