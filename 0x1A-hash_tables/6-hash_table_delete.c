#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	/* Check if the hash table is valid */
	if (ht == NULL)
		return;

	/* Loop through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Get the head of the linked list at each index */
		node = ht->array[i];
		/* Free each node in the linked list */
		while (node != NULL)
		{
			/* Save the next node */
			temp = node->next;
			/* Free the key and value of the node */
			free(node->key);
			free(node->value);
			/* Free the node itself */
			free(node);
			/* Move to the next node */
			node = temp;
		}
	}

	/* Free the array of the hash table */
	free(ht->array);

	/* Free the hash table structure */
	free(ht);
}
