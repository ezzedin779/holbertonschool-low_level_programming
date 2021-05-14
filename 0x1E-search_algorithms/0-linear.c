#include "search_algos.h"
/**
* linear_search - Searching algo in linear way
* @array: The array to search in
* @size: size of the array
* @value: value to be searched
* Return: the index where found else -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
