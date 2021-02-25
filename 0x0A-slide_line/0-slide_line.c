#include "slide_line.h"

/**
 * slide_line - slide and merge integers in given array if they are identical numbers and are either contiguous or separated by zeroes
 * @line: integer array given
 * @size: number of elements in array
 * @direction: direction, defined by SLIDE_LEFT or SLIDE_RIGHT macro passed for necessary sliding
 * 
 * Return: 1 for success or 0 for failure
 */

int slide_line(int *line, size_t size, int direction)
{
    int i, j, flag = 0;

    if (size < 1)
    {
        return (flag);
    }
    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
    {
        return (flag);
    }
    if (direction == SLIDE_LEFT)
    {
        for (i = 0; i < (int)size;)
        {
            for (j = 1; j < (int)size;)
            {
                if (line[j] == 0)
                {
                    j++;
                }
                if (line[i] == line[j])
                {
                    line[i] += line[j];
                    line[j] = 0;
                    flag = 1;
                    i++;
                    j++;
                }
                if (line[i] != line[j])
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
        }
    }
    if (direction == SLIDE_RIGHT)
    {
        for (i = ((int)size - 1); i >= 0;)
        {
            for (j = ((int)size - 2); j >= 0;)
            {
                if (line[j] == 0)
                {
                    j--;
                }
                if (line[i] == line[j])
                {
                    line[i] += line[j];
                    line[j] = 0;
                    flag = 1;
                    i--;
                    j--;
                }
                if (line[i] != line[j])
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
        }
    }
    return (flag);
}
