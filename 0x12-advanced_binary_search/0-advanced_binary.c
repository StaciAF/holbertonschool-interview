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
	size_t small = 0;
	size_t large = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (rec_advanced_bin(array, small, large, value));
}

/**
 * rec_advanced_bin - recursively searches for value
 * @array: pointer to first element
 * @small: beginning of array
 * @large: end of array
 * @value: searching for
 * Return: FIRST index for value or -1
 */

int rec_advanced_bin(int *array, size_t small, size_t large, int value)
{
	size_t count = small;
	int mid = (small + large) / 2;

	if (small > large)
		return (-1);
	printf("Searching in array: ");
	while (count <= large)
	{
		printf("%d", array[count]);
		if (count != large)
			printf(", ");
		else
			printf("\n");
		count++;
	}
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (array[mid] >= value)
		return (rec_advanced_bin(array, small, mid, value));
	else if (array[mid] < value)
		return (rec_advanced_bin(array, mid + 1, large, value));
	return (-1);
}
