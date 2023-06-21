#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name
 * @f: funtion pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * print - funtion that prints
 * @name: pointer to character
 * Return: Nothing
 */
void print(char *name)
{
	printf("%s\n", name);
}
