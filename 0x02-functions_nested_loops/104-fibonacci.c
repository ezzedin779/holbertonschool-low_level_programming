#include <stdio.h>
/**
 * main - fib 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 0, y = 1, z = 0, s = 0;

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
