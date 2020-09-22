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
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
		sum = sum + z;
	}
	printf("%d", sum)
	return (0);
}
