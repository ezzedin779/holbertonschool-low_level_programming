#include <stdlib.h>
/**
*create_array - creating an array and initializes it
*@size: size of the array
*@c: the char with whish the array gonna be initialized
*Return: a string
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	ch = malloc((size + 1) * sizeof(char));
	if ((size == 0) || (ch == NULL))
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	ch[i] = '\0';
	return (ch);
}
