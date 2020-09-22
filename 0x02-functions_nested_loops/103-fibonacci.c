#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int i, x = 1, y = 2, z;

	for (i = 1; i <= 4000000; ++i)
	{
		if (i % 2 != 0)
		{
		if (i != 4000000)
		printf("%d, ", x);
		else
		printf("%d\n", x);
		z = x + y;
		x = y;
		y = z;
		}
	}
	return (0);
}
