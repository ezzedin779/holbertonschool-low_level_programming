#include <stdio.h>
/**
 * main - fib 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, x = 1, y = 2, z;
	float sum = 0;

	for (i = 1; i <= 4000000; ++i)
	{
		z = x + y;
		x = y;
		y = z;
		if ((z % 2) == 0)
		sum += z;
	}
	printf("%.0f\n", sum);
	return (0);
}
