#include <stdio.h>
/**
 * main - print possible combinations of digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
for (i = 1; i < 10; ++i)
for (j = 1; j < 10; ++j)
putchar(i + '0');
putchar(' , ');
putchar(j + '0');
	putchar(' ');
return (0);
}
