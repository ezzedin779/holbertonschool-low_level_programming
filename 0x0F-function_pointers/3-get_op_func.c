#include "3-calc.h"

/**
*get_op_func - find the right operation
*@s: string
*Return: pointer to the function upon success
*/
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if ((*(ops[i]).op == *s) && (*(s + 1) == '\0'))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
