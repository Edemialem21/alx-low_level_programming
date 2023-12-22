#include "hash_tables.h"

/**
 * hash_table_get - function to return value associated with given key
 * @ht: hash table to get key/value pair from
 * @key: string used as key to find desired value in hash table
 *
 * Return: value associated with key, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *mover;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = (hash_djb2((unsigned char *)key) % ht->size);
	mover = ht->array[index];
	if (mover == NULL)
		return (NULL);
	while (mover->next != NULL)
	{
		if (strcmp(mover->key, key) == 0)
			break;
		mover = mover->next;
	}
	if (strcmp(mover->key, key) == 0)
		return (mover->value);
	return (NULL);
}
