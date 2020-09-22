#include <stdio.h>
/**
 * main - fib 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 1, y = 2, z;
	float sum = 0;

	do
	{
		z = x + y;
		x = y;
		y = z;
		if ((z % 2) == 0)
		sum += z;
	} while (z < 4000000);
	printf("%.0f\n", sum);
	return (0);
}
