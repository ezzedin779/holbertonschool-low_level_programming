#include <stdio.h>
/**
*main - printing the number of arguments passed
*@argc: length of argv
*@argv: array of strings
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
