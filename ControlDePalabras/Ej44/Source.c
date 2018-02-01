#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAM 50
main()
{
	char frase[TAM];
	int sw, i, cantidad;;
	sw = 0;
	printf("Introduce una frase");
	gets(frase);
	for (i = 0; frase[i] != '\0'; i++)
	{

		//cada vez que pasa a una letra compruebas y switch 0 significa que hay letra y convierte a 1 si fuera 0 la anterior es que no hubiera palabra.
		if (isalpha(frase[i]))
		{
			if (sw == 0)
			{
				cantidad = 0;
				sw = 1;
			}
			cantidad++;

			printf("%c", frase[i]);

		}


		//Estoy en un espacio pero lo anterior era una letra por lo tanto se acaba
		else
		{

			if (sw == 1)
			{

				sw = 0;

				printf(" %d", cantidad);
				printf("\n");
			}

		}

	}

	//Aqui evaluo la ultima palabra para su longitud
	if (sw == 1)
	{
		printf(" %d", cantidad);
	}

	getch();
}