#include "hash_tables.h"

/**
 * hash_table_set - function to add an element to the hash table
 * @ht: hash table to add key/value pair to
 * @key: string used as key to find desired value in hash table
 * @value: string stored as value with associated key
 *
 * Return: 1 if successful, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_duplicate, *key_duplicate;
	int index = 0;
	hash_node_t *new_node = NULL, *mover;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	value_duplicate = duplicate_string(value);
	key_duplicate = duplicate_string(key);
	if (value_duplicate == NULL || key_duplicate == NULL)
	{
		free_dups(&new_node, &key_duplicate, &value_duplicate);
		return (0);
	}
	new_node = initialize_new_node(key_duplicate, value_duplicate);
	if (new_node == NULL)
	{
		free_dups(&new_node, &key_duplicate, &value_duplicate);
		return (0);
	}
	index = (hash_djb2((unsigned char *)key) % ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	mover = ht->array[index];
	while (mover != NULL)
	{
		if (strcmp(mover->key, key) == 0)
		{
			free_dups(&new_node, &key_duplicate, &(mover->value));
			mover->value = value_duplicate;
			return (1);
		}
		mover = mover->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * duplicate_string - function to duplicate key/value string
 * @string: input key/value to duplicate
 * Return: duplicated string or NULL if failed
 */

char *duplicate_string(const char *string)
{
	int i = 0;
	char *duplicate;

	duplicate = malloc(sizeof(char) * (strlen(string) + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; string[i]; i++)
	{
		duplicate[i] = string[i];
	}
	duplicate[i] = '\0';
	return (duplicate);
}

/**
 * initialize_new_node - function to create and initialize new_node
 * @key_duplicate: key string to set new_node->key to
 * @value_duplicate: value string to set new_node->value to
 * Return: initialized new_node, or NULL if failed
 */

hash_node_t *initialize_new_node(char *key_duplicate, char *value_duplicate)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = key_duplicate;
	new_node->value = value_duplicate;
	new_node->next = NULL;
	return (new_node);
}

/**
 * free_dups - function to free duplicated string or extra node
 * @new_node: pointer to new node created
 * freed if node with key value already exists
 * @key: pointer to duplicated key string
 * freed if node with key exists or before exit failure
 * @value: pointer to duplicated value string
 * freed before exit failure or if value being replaced
 */

void free_dups(hash_node_t **new_node, char **key, char **value)
{
	free(*new_node);
	free(*key);
	free(*value);
}
