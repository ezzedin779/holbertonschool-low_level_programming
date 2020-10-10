#include <stdio.h>
#include <stdlib.h>
/**
*change - gives change
*@cents: int to make of strings
*Return: change
*/
int change(int cents)
{
	int x = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			x++;
			cents -= 25;
		}
		else if (cents >= 10)
		{
			x++;
			cents -= 10;
		}
		else if (cents >= 5)
		{
			x++;
			cents -= 5;
		}
		else if (cents >= 2)
		{
			x++;
			cents -= 2;
		}
		else
		{
			x++;
			cents -= 1;
		}
	}
	return (x);
}
/**
*main - giving change
*@argc: length of argv
*@argv: array of strings
*Return: 1
*/
int main(int argc, char *argv[])
{
	int x;

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		else
		{
			x = change(atoi(argv[1]));
			printf("%d\n", x);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
