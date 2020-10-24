#include <stdarg.h>
/**
*sum_them_all - The sum of n numbers
*@n: number of the undefined number of arguments
*Return: the sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list_int;

	if (n == 0)
		return (0);
	va_start(list_int, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list_int, int);
	va_end(list_int);
	return (sum);
}
