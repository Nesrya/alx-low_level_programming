#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this one frees 2d array
 * @grid: the 2d grid
 * @height: the height dimension of grid
 * Description: this one frees memory of grid
 * Return: nothing or void
 *
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
