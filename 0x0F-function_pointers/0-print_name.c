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
	if (!name || !f)
	{
		return;
	}
		f(name);
}
