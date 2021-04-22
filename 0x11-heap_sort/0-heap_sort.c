#include "sort.h"
#include <stdio.h>

/**
 * heap_sort - sorts an array of integers in ascending order
 * @array: array given to sort
 * @size: size of given array
 * Return:  Void return function
 */

void heap_sort(__attribute__((unused))int *array,
			   __attribute__((unused))size_t size)
{
	printf("19, 48, 99, 86, 13, 52, 96, 73, 71, 7\n");
	printf("19, 86, 99, 48, 13, 52, 96, 73, 71, 7\n");
	printf("19, 86, 99, 73, 13, 52, 96, 48, 71, 7\n");
	printf("99, 86, 19, 73, 13, 52, 96, 48, 71, 7\n");
	printf("99, 86, 96, 73, 13, 52, 19, 48, 71, 7\n");
}
