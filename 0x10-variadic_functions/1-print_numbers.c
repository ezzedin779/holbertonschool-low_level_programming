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

	if (n == 0)
		return;
	va_start(list_num, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			if (n - 1 != i)
				printf("%d", va_arg(list_num, int));
			else
				printf("%d\n", va_arg(list_num, int));
		}
		else
		{
			if (i == 0)
				printf("%d", va_arg(list_num, int));
			else if (n - 1 != i)
				printf("%s%d", separator, va_arg(list_num, int));
			else if (n - 1 == i)
				printf("%s%d\n", separator, va_arg(list_num, int));
		}
	}
	va_end(list_num);
}
