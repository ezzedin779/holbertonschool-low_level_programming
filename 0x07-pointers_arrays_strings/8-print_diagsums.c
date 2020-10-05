#include <stdio.h>
/**
*print_diagsums - printing the sum of the two diagonals of a square
*@a: the sqaure (2D array)
*@size: size of the square
*/
void print_diagsums(int *a, int size)
{
	int i = 0, maxsize = size * size, diag1 = 0, diag2 = 0;

	while (i < maxsize)
	{
		diag1 += a[i];
		i += size + 1;
	}
	i = size - 1;
	while (i < (maxsize - 1))
	{
		diag2 += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", diag1, diag2);
}
