#include <stdlib.h>
/**
*array_range - creating an array of int ranged from min to max
*@min: minimum range
*@max: maximum range
*Return: pointer to an array upon success
*/
int *array_range(int min, int max)
{
	int i, size;
	int *ar;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = calloc(size, sizeof(int) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= size && min <= max; i++, min++)
		ar[i] = min;
	return (ar);
}
