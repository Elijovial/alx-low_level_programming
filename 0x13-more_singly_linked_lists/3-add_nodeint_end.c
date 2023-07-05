#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: double pointer to a list_t
 * @n: pointer to const char
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *ptr;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = p;
	}
	return (ptr);
}
