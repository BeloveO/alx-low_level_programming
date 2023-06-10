#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve a value associated with a key
 * @ht: hash table to look into
 * @key: the key to be looked for
 * Return: the value associated with the key or NULL upon failure to find key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
