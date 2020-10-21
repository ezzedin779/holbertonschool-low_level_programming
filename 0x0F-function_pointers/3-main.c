#include "3-calc.h"
/**
*main - doing basic operation
*@argc: length of the array of strings
*@argv: array of strings
*Return: integer
*/
int main(int argc, char *argv[])
{
	int r;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	r = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", r);
	return (0);
}
