#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Description: in this function Each element of the grid should be initialized
 * to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int side1, side2;

	if (height <= 0 || width <= 0)
		return (0);

	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (0);
	for (side1 = 0; side1 < height; side1++)
	{
		grid[side1] = (int *) malloc(sizeof(int) * width);
		if (grid[side1] == NULL)
		{
			free(grid);
			for (side2 = 0; side2 <= side1; side2++)
			{
				free(grid[side2]);
			}
			return (0);
		}
	}
	for (side1 = 0; side1 < height; side1++)
	{
		for (side2 = 0; side2 < width; side2++)
		{
			grid[side1][side2] = 0;
		}
	}
	return (grid);
}
