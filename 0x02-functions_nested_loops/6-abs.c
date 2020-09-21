#include "holberton.h"
/**
*_abs - nothing is absolut
*@a: integer
*Return: integer
*/
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (a - (2 * a));
	}
}
