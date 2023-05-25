#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
/*
 * This is the part of code causing it to go into infinite loop
*The addition of i++ would resolve it
*/
	putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
