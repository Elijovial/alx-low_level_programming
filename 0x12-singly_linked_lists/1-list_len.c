#include "lists.h"

/**
 * list_len - function that prints all the elements of a list_t list
 * @h: head
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[%d] (nil)\n", 0);
		}
		h = h->next;
		count++;
		}
	return (count);
}