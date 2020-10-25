#include "variadic_functions.h"
#include <stdio.h>
/**
*print_strings - printing all the strings passed with a separator
*@separator: string to be printed between strings
*@n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_str;
	unsigned int i;
	char *string;

	va_start(list_str, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list_str, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_str);
}
