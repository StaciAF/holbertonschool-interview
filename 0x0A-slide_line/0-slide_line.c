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
	int flag = 0;

	if (size < 1 || (direction != SLIDE_LEFT && direction != SLIDE_RIGHT))
	{
		return (flag);
	}
	if (direction == SLIDE_LEFT)
	{
		flag = func_slide_left(line, size);
	}
	if (direction == SLIDE_RIGHT)
	{
		flag = func_slide_right(line, size);
	}
	return (flag);
}
/**
* func_slide_left - when direction is left, slides and merges
* @line: array of ints given to read as a line
* @size: number of elements in array
* Return: 1 for success, 0 for failure
*/
	int func_slide_left(int *line, size_t size)
	{
		int i, j, flag = 0;
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
				flag = 1;
				i++;
				j++;
			}
			else if (line[i] != line[j])
			{
				if (line[i] == 0)
				{
					line[i] += line[j];
					line[j] = 0;
					flag = 1;
					j++;
				}
				else
				{
					i++;
					if (i != j)
					{
						line[i] += line[j];
						line[j] = 0;
						flag = 1;
					}
					j++;
				}
			}
		}
		return (flag);
	}

/**
* func_slide_right - given direction, slides and merges ints in array
* @line: array of ints given in a line
* @size: number of elements in array
* Return: 1 for success, 0 for failure
*/
	int func_slide_right(int *line, size_t size)
	{
		int i, j, flag = 0;
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
				flag = 1;
				i--;
				j--;
			}
			else if (line[i] != line[j])
			{
				if (line[i] == 0)
				{
					line[i] += line[j];
					line[j] = 0;
					flag = 1;
					j--;
				}
				else
				{
					i--;
					if (i != j)
					{
						line[i] += line[j];
						line[j] = 0;
						flag = 1;
					}
					j--;
				}
			}
		}
		return (flag);
	}
