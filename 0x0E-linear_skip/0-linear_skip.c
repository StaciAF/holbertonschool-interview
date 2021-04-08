#include "search.h"

/**
 * linear_skip - searches for a value in a sorted skip list of ints
 * @list: pointer to the head of the skip list
 * @value: the value to search for
 * Return: a pointer to the first node of value or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *myEx = NULL;
	skiplist_t *move = NULL;


	if (list == NULL)
		return (NULL);
	move = list;
	myEx = list;
	while (myEx->express != NULL)
	{
		move = myEx;
		myEx = myEx->express;
		printf("Value checked at index [%zu] = [%d]\n", myEx->index, myEx->n);
		if (value <= myEx->n)
		{
			break;
		}
	}
	printf("Value found between indexes [%zu] and [%zu]\n",
	       move->index, myEx->index);
	while (move->index != myEx->index)
	{
		printf("Value checked at index [%zu] = [%d]\n", move->index, move->n);
		if (value <= move->n)
		{
			break;
		}
		move = move->next;
	}
	if (value == move->n)
	{
		return (move);
	}
	return (NULL);
}
