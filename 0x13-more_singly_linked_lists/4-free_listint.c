#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
