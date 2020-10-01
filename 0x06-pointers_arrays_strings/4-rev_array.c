/**
*reverse_array - reverse array
*@a: array int
*@n: length a
*Return: integer
*/
void reverse_array(int *a, int n)
{
	int i, j, x;

	x = 0, i = n - 1, j = 0;
	if (n % 2 == 0)
	{
		while (i >= n / 2)
		{
			x = a[j];
			a[j] = a[i];
			a[i] = x;
			i--;
			j++;
		}
	}
	else
	{
		while (i >= (n - 1) / 2)
		{
			x = a[j];
			a[j] = a[i];
			a[i] = x;
			i--;
			j++;
		}
	}
}
