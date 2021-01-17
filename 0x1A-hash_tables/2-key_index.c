#include "hash_tables.h"
/**
*key_index - give me the index please ?
*@key: the key to give an index
*@size: size of the array of the hash table
*Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, i;

	i = hash_djb2((unsigned char *) key);
	index = i % size;
	return (index);
}
