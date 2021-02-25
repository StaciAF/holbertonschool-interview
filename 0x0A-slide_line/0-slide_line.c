#include "slide_line.h"

/**
 * slide_line - slide and merge integers in given array if they are identical
 * numbers and are either contiguous or separated by zeroes
 * @line: integer array given
 * @size: number of elements in array
 * @direction: direction, defined by SLIDE_LEFT or SLIDE_RIGHT macro passed for
 * necessary sliding
 *
 * Return: 1 for success or 0 for failure
 */

int slide_line(int *line, size_t size, int direction)
{
	if (size < 1 || (direction != SLIDE_LEFT && direction != SLIDE_RIGHT))
	{
		return (0);
	}
	if (direction == SLIDE_LEFT)
	{
		func_slide_left(line, size);
	}
	if (direction == SLIDE_RIGHT)
	{
		func_slide_right(line, size);
	}
	return (1);
}
/**
 * func_slide_left - when direction is left, slides and merges
 * @line: array of ints given to read as a line
 * @size: number of elements in array
 * Return: 1 for success, 0 for failure
 */
void func_slide_left(int *line, size_t size)
{
	int i, j;

	i = 0;
	for (j = 1; j < (int)size;)
	{
		if (line[j] == 0)
		{
			j++;
			continue;
		}
		if (line[i] == line[j])
		{
			line[i] += line[j];
			line[j] = 0;
			i++;
			j++;
		}
		else if (line[i] != line[j])
		{
			if (line[i] == 0)
			{
				line[i] += line[j];
				line[j] = 0;
				j++;
			}
			else
			{
				i++;
				if (i != j)
				{
					line[i] += line[j];
					line[j] = 0;
				}
				j++;
			}
		}
	}
}

/**
 * func_slide_right - given direction, slides and merges ints in array
 * @line: array of ints given in a line
 * @size: number of elements in array
 * Return: 1 for success, 0 for failure
 */
void func_slide_right(int *line, size_t size)
{
	int i, j;

	i = ((int)size - 1);
	for (j = ((int)size - 2); j >= 0;)
	{
		if (line[j] == 0)
		{
			j--;
			continue;
		}
		if (line[i] == line[j])
		{
			line[i] += line[j];
			line[j] = 0;
			i--;
			j--;
		}
		else if (line[i] != line[j])
		{
			if (line[i] == 0)
			{
				line[i] += line[j];
				line[j] = 0;
				j--;
			}
			else
			{
				i--;
				if (i != j)
				{
					line[i] += line[j];
					line[j] = 0;
				}
				j--;
			}
		}
	}
}
