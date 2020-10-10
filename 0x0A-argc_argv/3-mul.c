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
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return(0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
