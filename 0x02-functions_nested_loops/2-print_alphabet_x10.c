#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet 10x
 * Return: 0
 */

void print_alphabet(void)
{
	int i;
int c;
for (i = 1; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');
}
}
