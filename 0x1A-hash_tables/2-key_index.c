#include "hash_tables.h"
/**
 * key_index - function to give the index of a key
 * @key: the key
 * @size: size of array of the hash table
 * Return: the index at which the key is stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
