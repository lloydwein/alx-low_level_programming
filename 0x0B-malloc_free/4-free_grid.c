#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Description: a function
 * Note that we will compile with your alloc_grid.c file. Make sure it compiles
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int mem;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (mem = 0; mem < height; mem++)
	{
		free(grid[mem]);
	}
	free(grid);
}
