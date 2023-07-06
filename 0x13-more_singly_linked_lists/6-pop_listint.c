#include "lists.h"

/**
 * pop_listint - function that frees a listint_t list.
 * @head: head
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
		n = (*head)->n;
		p = *head;
		*head = (*head)->next;
		free(p);
		return (n);
}
