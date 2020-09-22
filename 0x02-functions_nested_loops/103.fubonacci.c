#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long i,x = 1, y = 2, z;

	for (i = 1; i <= 4000000; ++i)
	{
		if (i % 2 == 0)
		{
		if (i != 4000000)
		printf("%ld, ", x);
		else
		printf("%ld\n", x);
		z = x + y;
		x = y;
		y = z;
		}
	}
	return (0);
}
