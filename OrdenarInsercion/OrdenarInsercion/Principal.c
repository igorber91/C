#define TAM 10
main()
{
	int i, j, tabla[TAM], min, aux;

	/*CARGAR TABLA*/
	/*para cada posici�n i de la tabla*/
	for (i = 0; i < TAM; i++)
	{
		system("cls");
		/*pedir tabla[i]*/
		printf("Tabla[%d]", i);
		scanf("%d", &tabla[i]);

	}
	/*FIN CARGAR TABLA*/

	/*ORDENAR TABLA*/
	/*para cada posici�n i de la tabla*/
	for (i = 1; i < TAM; i++)
	{
		aux = tabla[i];
		j = i-1;
		/*Mientras no llegue a la posici�n 1 y no encuentre posici�n para aux*/
		while (j > 0 && tabla[j] >= aux)
		{
			tabla[j+1] = tabla[j];
			j--;
		}
		if (tabla[j] < aux)
		{
			tabla[j + 1] = aux;
		}
		else
		{
			tabla[j + 1] = tabla[j];
			tabla[j] = aux;
		}
	}
	/*FIN ORDENAR*/

	/*MOSTRAR TABLA*/
	/*mostrar cabecera*/
	printf("%8s\t%9s\n", "POSICION", "CONTENIDO");
	/*para cada posici�n i de la tabla*/
	for (i = 0; i < TAM; i++)
	{
		/*mostrar l�nea*/
		printf("%8d\t%9d\n", i, tabla[i]);
	}
	/*FIN MOSTRAR TABLA*/
	getch();
}