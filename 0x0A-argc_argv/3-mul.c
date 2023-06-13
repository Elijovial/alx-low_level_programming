#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program starts here
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result = 1;
	int i;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
