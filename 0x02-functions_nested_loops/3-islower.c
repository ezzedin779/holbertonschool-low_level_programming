#include "holberton.h"
/**
*_islower - checking my alphabetics
*@c: integer
*Return: integer
*/
int _islower(int c)
{
	if ((c <= 'a') || (c >= 'z'))
		return (0);
	else
		return (1);
}
