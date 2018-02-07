#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAM 5
typedef struct
{
	char palabra[25];
	char traduccion[25];
}ENTRADA;
main()
{
	int i, j, s, m;
	char resp;
	char palabra[25];
	ENTRADA tabla[TAM],aux; 
	/*CARGAR TABLA*/
	for (i = 0; i < TAM; i++)
	{
		/*PEDIR DATOS*/
		system("cls");
		printf("Palabra: ");
		gets(tabla[i].palabra);
		printf("Traducción: ");
		gets(tabla[i].traduccion);
	}

	/*ORDENAR TABLA*/
	for(i=0;i<TAM-1;i++)
		for (j = TAM - 1; j > i; j--)
		{
			if (strcmp(tabla[j].palabra, tabla[j - 1].palabra) < 0)
			{
				/*INTERCAMBIAR*/
				aux = tabla[j];
				tabla[j] = tabla[j - 1];
				tabla[j - 1] = aux;
			}
		}

	/*BUSCAR PALABRAS*/
	do
	{
		system("cls");
		printf("Palabra: ");
		gets(palabra);
		//BÚSQUEDA BINARIA
		i = 0; s = TAM - 1;
		m = (i + s) / 2;
		while (strcmp(tabla[m].palabra, palabra) != 0 && i <= s)
		{
			if(strcmp(tabla[m].palabra,palabra)<0)
			{//muevo i
				i = m + 1;
			}
			else
			{
				//muevo s
				s = m - 1;
			}
			m = (i + s) / 2;
		}

		if (strcmp(tabla[m].palabra, palabra) == 0)
		{
			printf("Traducción: %s", tabla[m].traduccion);
		}
		else
		{
			printf("La palabra no tiene traducción");
		}
		printf("Desea traducir otra palabra?");
		resp = toupper(getche());
	} while (resp == 'S');
}