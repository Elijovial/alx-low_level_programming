#include "lists.h"

/**
* listint_len - function that prints all the elements of a listint_t list.
* @h: head
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			return (0);
		}
			h = h->next;
			count++;
	}
	return (count);
}
