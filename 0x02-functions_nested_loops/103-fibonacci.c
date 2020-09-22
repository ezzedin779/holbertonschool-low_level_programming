#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, x = 1, y = 2, z, sum;

	for (i = 1; i <= 4000000; ++i)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
		sum = sum + z;
	}
	printf("%ld\n", sum);
	return (0);
}
