#include "lists.h"

/**
 * add_node_end - function that adds a new node at the beginning
 * of a list_t list.
 * @head: double pointer to a list_t
 * @str: pointer to const char
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *ptr;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = strlen(str);
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
