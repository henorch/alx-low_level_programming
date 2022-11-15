#include "main.h"
#include <stdlib.h>



/**
 * free_grid- Frees grid array of integers.
 * @grid: The grid array of integers to be freed.
 * @height: The height of grid.
 * Return: void
 */

void free_grid(int **grid, int height)
{
int ind;
for (ind = 0; ind < height; ind++)
free(grid[ind]);
}
