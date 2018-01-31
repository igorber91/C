#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	char frase[100];
	char numeros[10][7] = { "cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve" };
	int i,n;
	printf("introduce frase: ");
	gets(frase);
	for (i = 0; frase[i] != '\0'; i++)
	{
		if (isdigit(frase[i]))
		{
			n = frase[i] - '0';
			printf("%s", numeros[n]);
			

		}
		else 
		{
			printf("%c", frase[i]);
		}
	}
	getch();
} 

