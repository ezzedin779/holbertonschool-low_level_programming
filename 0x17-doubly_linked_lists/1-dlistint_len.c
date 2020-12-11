#include "lists.h"
/**
*dlistint_len - length of a doubly linked lists
*@h: head of the list
*Return: the length
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
		h = h->next;
	return (i);
}
