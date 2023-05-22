#include <stdio.h>
/**
 * main - print lowercase z-a
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
putchar(c);
	putchar('\n');
return (0);
}
