#include <stdio.h>
/**
 * main - fib 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 0, y = 1, z = 0;
	float sum = 0;

	while (z < 4000000)
	{
		z = x + y;
		if ((z % 2) == 0)
			sum += z;
		x = y;
		y = z;
	}
	printf("%.0f\n", sum);
	return (0);
}
