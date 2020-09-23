#include <stdio.h>
/**
 * main - fib 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 1, y = 2, z = 0, s = 0;
	int i = 0;

	printf("%lu, %lu, ", x, y);
	while (i <= 96)
	{
		z = x + y;
		s = z;
		while (s >= 10)
			s /= 10;
		if ((s == 1) || (s == 2))
		{
			printf("%lu", z);
			i++;
			if (i <= 95)
				printf(", ");
			else
				printf("\n");
		}
		x = y;
		y = z;
	}
	return (0);
}
