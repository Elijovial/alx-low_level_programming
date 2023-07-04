#include "lists.h"

/**
 * add_node - function that adds a new node at the begining of a list_t.
 * @head: head of node
 * @str: pointer to a string
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
