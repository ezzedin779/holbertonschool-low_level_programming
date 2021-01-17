#include "hash_tables.h"
/**
*hash_table_print - print the hash table
*@ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int signal = 0;

	if (ht == NULL)
		return;
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (signal == 1)
				print(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			signal = 1;
			ht->array[i] = (ht->array[i])->next;
		}
	}
	printf("}\n");
}
