
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAM 10

main()
{
	int i, j, tabla[TAM],  aux;

	/*CARGAR TABLA*/
	/*para cada posición i de la tabla*/
	for (i = 0; i < TAM; i++)
	{
		system("cls");
		/*pedir tabla[i]*/
		printf("Tabla[%d]", i);
		scanf("%d", &tabla[i]);

	}
	/*FIN CARGAR TABLA*/

	/*ORDENAR TABLA*/
	/*para cada posición i de la tabla*/
	for (i = 0; i < TAM - 1; i++)
	{
		/*BUSCAR min*/
		//printf("\n%d\n",i);
		//printf("\n%d\n", tabla[i]);

		
		/*para cada posición j de la tabla, desde TAM-1 hasta i*/
		for (j = TAM-1; j >i; j--)
		{
			/*si tabla[j]<tabla[min] asignar j a min*/
			if (tabla[j] < tabla[j - 1])
			{
				/*intercambiar tabla[j] y tabla[j-1]*/
				aux = tabla[j];
				tabla[j] = tabla[j - 1];
				tabla[j - 1] = aux;
			}
		}
		/*FIN BUSCAR*/
				
	}
	/*FIN ORDENAR*/

	/*MOSTRAR TABLA*/
	/*mostrar cabecera*/
	printf("%8s\t%9s\n", "POSICION", "CONTENIDO");
	/*para cada posición i de la tabla*/
	for (i = 0; i < TAM; i++)
	{
		/*mostrar línea*/
		printf("%8d\t%9d\n", i, tabla[i]);
	}
	/*FIN MOSTRAR TABLA*/
	getch();
}








