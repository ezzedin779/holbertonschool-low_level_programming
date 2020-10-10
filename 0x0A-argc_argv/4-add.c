#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*checker - checking if it's a number or not
*@a: array of strings
*Return: integer
*/
int checker(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (isdigit(a[i]) == 0)
			return (0);
	}
	return (1);
}
/**
*main - adding 2 numbers
*@argc: length of argv
*@argv: array of strings
*Return: 1
*/
int main(int argc, char *argv[])
{
	int x = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (checker(argv[i]) == 1)
			x += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", x);
	return (0);
}
