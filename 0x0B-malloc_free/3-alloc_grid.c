#include <stdlib.h>
/**
*alloc_grid - creates a 2D array of int
*@width: the width of the array
*@height: the height of the array
*Return: 2D array
*/
int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
