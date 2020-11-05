#include "holberton.h"

int checker(const char *s);

/**
*checker - checks if there's another char
*@s: string to check
*Return: 1 upon sucess
*/
int checker(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != '0' && s[i] != '1')
			return (0);
	}
	return (1);
}

/**
*binary_to_uint - convert binary to unsigned int
*@b: string of the binary number
*Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, mul = 1;
	int i = 0, rem, n;

	if (*b == NULL)
		return (0);
	n = checker(b);
	if (n == 0)
		return (0);
	n = atoi(b);
	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * mul;
		mul *= 2;
		i++;
	}
	return (dec);
}
