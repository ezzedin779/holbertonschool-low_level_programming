#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, s;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) || (i % 5))
		{
			s += i;
		}
	}
	printf ("%d\n", s);
	return (0);
}
