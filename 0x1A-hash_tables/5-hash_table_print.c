#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	/* Check if the hash table is valid */
	if (ht == NULL)
		return;

	/* Print the opening curly bracket */
	printf("{");

	/* Loop through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at each index */
		node = ht->array[i];
		while (node != NULL)
		{
			/* Print a comma if there is already an element printed */
			if (flag == 1)
				printf(", ");

			/* Print the key and value of the node */
			printf("'%s': '%s'", node->key, node->value);

			/* Set the flag to 1 */
			flag = 1;

			/* Move to the next node */
			node = node->next;
		}
	}

	/* Print the closing curly bracket and a new line */
	printf("}\n");
}
