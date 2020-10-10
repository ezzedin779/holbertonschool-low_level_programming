#include <stdio.h>
/**
*main - printing the number of arguments passed
*@argc: length of argv
*@argv: array of strings
*Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
