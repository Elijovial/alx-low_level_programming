#include <stdio.h>
/**
 * main - print single digit of base 10
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i <= 15; ++i)
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i - 10 + 'a');
}
	putchar('\n');
return (0);
}
