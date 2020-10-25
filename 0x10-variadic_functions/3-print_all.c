#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
*char_p - print character
*@character: the character to print
*/
void char_p(va_list character)
{
	char c;

	c = va_arg(character, int);
	printf("%c", c);
}

/**
*int_p - printing int
*@integer: the integer to print
*/
void int_p(va_list integer)
{
	int x;

	x = va_arg(integer, int);
	printf("%d", x);
}

/**
*float_p - printing float
*@f: the float to print
*/
void float_p(va_list f)
{
	double x;

	x = va_arg(f, double);
	printf("%f", x);
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
		printf("(nil)");
	else
		printf("%s", str);
}
/**
*print_all - printing depending on a format
*@format: of printing
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;
	char *seperator = "";
	choose_t a[] = {
		{"c", char_p},
		{"s", string_p},
		{"i", int_p},
		{"f", float_p},
		{NULL, NULL}
	};

	va_start(list, format);
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
	va_end(list);
	printf("\n");
}
