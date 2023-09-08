#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key
 * Return: The value, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/* Check if the key and the hash table are valid */
	if (key == NULL || ht == NULL)
		return (NULL);

	/* Compute the index of the key */
	index = key_index((unsigned char *)key, ht->size);

	/* Search for the key in the linked list at that index */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* Return its value if found */
			return (temp->value);
		}
		temp = temp->next;
	}

	/* Return NULL if not found */
	return (NULL);
}
