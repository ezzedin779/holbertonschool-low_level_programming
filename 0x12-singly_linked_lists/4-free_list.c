#include "lists.h"
/**
*free_list - free the list
*@head: the list to free
*/
void free_list(list_t *head)
{
	list_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f->str);
		free(f);
	}
}
