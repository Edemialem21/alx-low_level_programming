#include "hash_tables.h"

/**
 * key_index - function to find index of given key
 * using hash_djb2 modulo size of hash table
 * @key: string used as key to find desired value in hash table
 * @size: size of the array of the hash table
 *
 * Return: index of the hash table where the key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
