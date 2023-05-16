#include "main.h"
#include <stdlib.h>
/**
 * free grid - function that frees a 2D array
 * @grid: input 2D array of integers
 * @height: grid height
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

