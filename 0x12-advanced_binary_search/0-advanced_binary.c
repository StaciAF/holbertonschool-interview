#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: pointer to the first element of the array we are searching
 * @size: the number of elements in the array
 * @value: the value we are searching for
 * Return: the index (int) where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end, mid, count;

	if (array == NULL)
		return (-1);
	end = size - 1;
	while (start <= end)
	{
		mid = ((start + end) / 2);
		printf("Searching in array: ");
		for (count = start; count < end; count++)
			printf("%d, ", array[count]);
		printf("%d\n", array[count]);

		if (array[mid] < value)
		{
			start = (mid + 1);
			if (start > end)
			{
				return (-1);
			}
		}
		else if (array[mid] > value)
		{
			end = (mid - 1);
			if (start > end)
			{
				return (-1);
			}
		}
		else
			return (mid);
	}
	return (-1);
}
