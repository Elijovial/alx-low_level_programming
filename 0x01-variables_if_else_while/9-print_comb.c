#include <stdio.h>
/**
 * main - print possible combinations of digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; ++i)
{
putchar(i + '0');
if (i != '9')
{
putchar(',');
	putchar(' ');
}
else
{
putchar(i);
}
}
return (0);
}
