#include <stdio.h>
#include <stdlib.h>
/**
*main - printing the number of arguments passed
*@argc: length of argv
*@argv: array of strings
*Return: 1
*/
int main(int argc, char *argv[])
{
	int x = 0, var = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
		{
			var = atoi(argv[i]);
			x += var;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", x);
	return (0);
}
