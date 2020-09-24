#include <stdio.h>
/**
*main - void
*Largest prime factor
*Return: 0
*/
int main(void)
{
	long int n = 612852475143, x = 2, max;

	while (n != 0)
	{
		if (n % x != 0)
			x += 1;
		else
		{
			max = n;
			n /= x;
			if (n == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}
	return (0);
}
