#include "lists.h"
/**
*sum_dlistint - sum of a doubly linked list
*@head: the head of the list
*Return: the sum of the datas
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
