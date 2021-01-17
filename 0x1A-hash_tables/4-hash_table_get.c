#include "hash_tables.h"
/**
*hash_table_get - get that key please
*@ht: the hash table
*@key: the key
*Return: the value of the key or null
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int index;
	char *value = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	new_node = ht->array[index];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;
	if (new_node == NULL)
		return (value);
	value = new_node->value;
	return (value);
}
