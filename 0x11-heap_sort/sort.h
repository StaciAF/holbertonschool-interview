#ifndef _SORT_H
#define _SORT_H


/* HELPER FUNCTIONS */
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
	if (i > 0)
	printf(", ");
	printf("%d", array[i]);
	++i;
	}
	printf("\n");
}

/* PROTOTYPES */
void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);

#endif /* SORT_H */
