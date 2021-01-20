#include "lists.h"

/**
 * is_palindrome - checks if singly linked list is a palindrom
 * @head: head of given singly linked list
 *
 * Return: 1 for palindrome, 0 if not
 */

int is_palindrome(listint_t **head)
{
	listint_t *current;
	int list_size = 0;
	int compare_array[4096];
	int i = 0;


	if (head == NULL)
	{
		return (0);
	}

	current = *head;
	while (current != NULL)
	{
		compare_array[list_size] = current->n;
		list_size++;
		current = current->next;
	}
	if (list_size < 2)
	{
		return (0);
	}
	if (list_size == 0)
	{
		return (1);
	}
	current = *head;
	while (i < list_size)
	{
		if (compare_array[i] == current->n)
		{
			i++;
			current = current->next;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
