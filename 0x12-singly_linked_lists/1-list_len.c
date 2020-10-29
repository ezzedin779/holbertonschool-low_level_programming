#include "lists.h"
/**
*list_len - return the length of a list
*@h: the list to calcul the length
*Return: length
*/
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
