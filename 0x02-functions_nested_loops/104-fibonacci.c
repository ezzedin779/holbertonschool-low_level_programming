#include <stdio.h>
/**
 * main - fib 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 1, y = 2, z = 0, s = 0;

	printf("%ld, %ld, ", x, y);
	while (z <= 98)
	{
		z = x + y;
		s = z;
		while (s >= 10)
			s /= 10;
		if ((s == 1) || (s == 2))
		{
			printf("%ld", z);
			if (z < 98)
				printf(", ");
			else
				printf("\n");
		}
		x = y;
		y = z;
	}
	return (0);
}
