#include <stdio.h>
/**
*main - printing the name of the program
*@argc: length of argv
*@argv: array of strings
*Return: 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
