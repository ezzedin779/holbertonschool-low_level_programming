#include <stdlib.h>
/**
*_calloc - allocate memory for an array using malloc
*@nmemb: number of members
*@size: size of each member
*Return: pointer upon success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *s;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	p = s;
	for (i = 0; i < nmemb * size; i++)
		p[i] = '\0';
	return (s);
}
