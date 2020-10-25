#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
*struct choose_right - choosing the right type
*@type: the type to print
*@func: func of the type to print
*/
typedef struct choose_right
{
	char *type;
	void (*func)(va_list);
} choose_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void char_p(va_list character);
void int_p(va_list integer);
void float_p(va_list f);
void string_p(va_list string);
void print_all(const char * const format, ...);
#endif
