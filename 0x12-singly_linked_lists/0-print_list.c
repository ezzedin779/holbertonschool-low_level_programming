#include "lists.h"
/**
*print_list - print a list of nodes
*@h: the list to print
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		if (n->str != NULL)
			printf("[%d] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		n = n->next;
	}
	return (i);
}
