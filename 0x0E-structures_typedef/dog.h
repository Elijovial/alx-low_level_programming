#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type
 * @name: Dog name
 * @age: Dog's age
 * @owner: The owner of the dog
 * Return: Always 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif