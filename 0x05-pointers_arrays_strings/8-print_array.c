#include <stdio.h>
/**
*print_array - print an Array
*@a: array of int
*@n: integer
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n]);
}
