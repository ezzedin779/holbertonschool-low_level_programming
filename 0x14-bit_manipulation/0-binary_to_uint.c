#include "holberton.h"
/**
*binary_to_uint - convert binary to unsigned int
*@b: string of the binary number
*Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, mul = 1;
	int i = 0;

	if (*b == '\0')
		return (0);
	while (b[i] != '\0')
		i++;
	i -= 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec = dec + ((b[i] - '0') * mul);
		mul *= 2;
		i--;
	}
	return (dec);
}
