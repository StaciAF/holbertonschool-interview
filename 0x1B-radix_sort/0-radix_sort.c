#include "sort.h"

/**
 * get_max - gets the max
 * @array: array given
 * @size: size of given array
 * Return: max int
 **/
int get_max(int *array, size_t size)
{
	int max = array[0];
	int intSize = size;
	int i;

	for (i = 1; i < intSize; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}

/**
 * radix_sort - sorts digits LSD radix style
 * @array: array given
 * @size: size of given array
 **/
void radix_sort(int *array, size_t size)
{
	int bucket[10][10], bucket_cnt[10];
	int i, j, k, r, NOP = 0, divisor = 1, lar, pass;
	int intSize = size;

	lar = get_max(array, intSize);
	while (lar > 0)
	{
		NOP++;
		lar /= 10;
	}
	for (pass = 0; pass < NOP; pass++)
	{
		for (i = 0; i < 10; i++)
		{
			bucket_cnt[i] = 0;
		}
		for (i = 0; i < intSize; i++)
		{
			r = (array[i] / divisor) % 10;
			bucket[r][bucket_cnt[r]] = array[i];
			bucket_cnt[r] += 1;
		}
		i = 0;
		for (k = 0; k < 10; k++)
		{
			for (j = 0; j < bucket_cnt[k]; j++)
			{
				array[i] = bucket[k][j];
				i++;
			}
		}
		print_array(array, size);
		divisor *= 10;
	}
}
