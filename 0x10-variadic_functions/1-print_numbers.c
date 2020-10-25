#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers - printing all the numbers passed with a separator
*@separator: string to be printed between numbers
*@n: number of int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_num;
	unsigned int i;
	int x;

	if (n == 0)
		return;
	va_start(list_num, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(list_num, int);
			printf("%d", x);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_num);
}
