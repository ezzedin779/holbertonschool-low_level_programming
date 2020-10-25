#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
*char_p - print character
*@character: the character to print
*/
void char_p(va_list character)
{
	printf("%c", va_arg(character, int));
}

/**
*int_p - printing int
*@integer: the integer to print
*/
void int_p(va_list integer)
{
	printf("%d", va_arg(integer, int));
}

/**
*float_p - printing float
*@f: the float to print
*/
void float_p(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
*string_p - printing string
*@string: the string to print
*/
void string_p(va_list string)
{
	char *str;

	str = va_arg(string, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
*print_all - printing depending on a format
*@format: of printing
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;
	char *seperator = "";
	choose_t a[] = {
		{"c", char_p},
		{"s", string_p},
		{"i", int_p},
		{"f", float_p},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (a[j].type != NULL)
		{
			if (*(a[j].type) == format[i])
			{
				printf("%s", seperator);
				a[j].func(list);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
