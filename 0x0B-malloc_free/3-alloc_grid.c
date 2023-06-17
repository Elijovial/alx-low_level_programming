#include "main.h"


/**
 * alloc_grid - a function that returns a pointer to 2 dimensional array
 * @width: the row
 * @height: the column
 * Return: 0
 */
int **alloc_grid(int width, int height)
{

	int i;
	int j = 0;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
				free(arr);
				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
