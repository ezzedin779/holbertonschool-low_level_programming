#include <stdlib.h>
/**
*_realloc - creating reallocation using malloc
*@ptr: old pointer
*@old_size: old size of ptr
*@new_size: the new size of ptr
*Return: pointer to the reallocation if succeeded
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}
