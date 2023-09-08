#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	/* Check if the key and the hash table are valid */
	if (key == NULL || ht == NULL)
		return (0);

	/* Compute the index of the key */
	index = key_index((unsigned char *)key, ht->size);

	/* Check if there is already an element with the same key */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* Update its value and return 1 */
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	/* Otherwise, create a new node with the key and value */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);

	/* Insert it at the beginning of the linked list at that index */
	node->next = ht->array[index];
	ht->array[index] = node;

	/* Return 1 if successful */
	return (1);
}
