#include "lists.h"
/**
*_strlen - length of a string
*@str: string
*Return: int
*/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}
/**
*add_node - adds new nodes to the list at the begging
*@head: the list
*@str: content of the new node
*Return: the adress of the new element upon success or a NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
