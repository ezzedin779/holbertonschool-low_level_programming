#include "function_pointers.h"
/**
*print_name - print a name
*@name: pointer to a string (the name to print)
*@f: pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
