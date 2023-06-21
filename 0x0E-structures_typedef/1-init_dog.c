#include "dog.h"

/**
 * init_dog - Initialize a variable
 * @d: pointer to stuct dog
 * @name: pointer to character
 * @age: float parameter
 * @owner: poibter to character
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
