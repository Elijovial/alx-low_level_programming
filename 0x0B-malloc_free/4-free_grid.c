#include "main.h"

/**
 * free_grid - function that frees 2 dimensional grid previously created
 * @grid: address of the 2 dimensional arrays
 * @height: height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
