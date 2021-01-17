#include "hash_tables.h"
/**
*hash_table_delete - delete the hash table
*@ht: the hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash = ht;
	hash_node_t *node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(hash->array);
	free(hash);
}
