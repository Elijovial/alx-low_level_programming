#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: pointet to dog_t
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
