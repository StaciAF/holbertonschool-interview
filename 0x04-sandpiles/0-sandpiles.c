#include "sandpiles.h"

/**
* sandpiles_sum - function to compute sum of two stable sandpiles
* @grid1: first stable grid to be summed with second
* @grid2: second stable grid to be summed with first
*
* Return: Void
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int rows = 3;
	int columns = 3;
	int i, j;
	int temp[3][3];
	bool stable = true;

	/* adds grid1 and grid2 matrix values */
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
			if (grid1[i][j] > 3)
			{
				stable = false;
			}
		}
	}
	/* creates temp matrix with grid1 values */
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			temp[i][j] = grid1[i][j];
		}
	}
	while (!stable)
	{
		printf("=\n");
		print_grid(grid1);
		topples(temp);
		add_grains(grid1, temp);
		stable = temp_to_grid1(grid1, temp);
	}
}

/**
 * print_grid - prints given grid
 * @grid: stable 3x3 grid
 *
 * Return: void
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
* topples - reduces all values > 3 by 4
* @temp: temporary grid for editing
*
* Return: void
*/
void topples(int temp[3][3])
{
	int i, j;
	int rows = 3;
	int columns = 3;

	for (i = 0; i < rows;)
	{
		for (j = 0; j < columns; j++)
		{
			if (temp[i][j] > 3)
			{
				temp[i][j] -= 4;
			}
		}
		i++;
	}
}

/**
* add_grains - checks location and ads 1 grain of sand
* @grid1: new set grid to be printed
* @temp: temporary grid for editing
*
* Return: void
*/
void add_grains(int grid1[3][3], int temp[3][3])
{
	int i, j;
	int rows = 3;
	int columns = 3;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			if (grid1[i][j] > 3)
			{
				if (i + 1 > 0 && i + 1 < 3)
				{
					temp[i + 1][j] += 1;
				}
				if (i - 1 >= 0)
				{
					temp[i - 1][j] += 1;
				}
				if (j + 1 > 0 && j + 1 < 3)
				{
					temp[i][j + 1] += 1;
				}
				if (j - 1 >= 0)
				{
					temp[i][j - 1] += 1;
				}
			}
		}
	}
}

/**
* temp_to_grid1 - updates grid1 values with new set from temp
* @grid1: new set grid to be printed
* @temp: temporary grid for editing
*
* Return: void
*/
bool temp_to_grid1(int grid1[3][3], int temp[3][3])
{
	int i, j;
	int rows = 3;
	int columns = 3;
	bool stable = true;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			if (temp[i][j] > 3)
			{
				stable = false;
			}
			grid1[i][j] = temp[i][j];
		}
	}
	return (stable);
}
