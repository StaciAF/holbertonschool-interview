#include "list.h"

/**
 * add_node_end - Adds a new node at the end of doubly circular linked list
 * @list: list given to be modified
 * @str: string given to copy to new node
 * Return: Address to new node or NULL
 **/

List *add_node_end(List **list, char *str)
{
	List *new, *end;

	new = malloc(sizeof(List));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
		return (NULL);
	new->next = new;
	if (*list == NULL)
	{
		new->prev = new;
		*list = new;
		return (*list);
	}
	end = *list;
	while (end->next && end->next != *list)
		end = end->next;
	end->next = new;
	new->prev = end;
	new->next = *list;
	(*list)->prev = new;
	end = new;
	return (end);
}

/**
 * add_node_begin - Adds new node to beginning of a doubly circular list
 * @list: list given to be modified
 * @str: string given to copy to new node
 *
 * Return: Address of new node of NULL
 **/

List *add_node_begin(List **list, char *str)
{
	List *new, *end;

	new = malloc(sizeof(List));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
		return (NULL);
	if (*list == NULL)
	{
		new->prev = new;
		new->next = new;
		*list = new;
		return (*list);
	}
	end = *list;
	while (end->next && end->next != *list)
		end = end->next;
	(*list)->prev = new;
	new->next = *list;
	new->prev = end;
	end->next = new;
	*list = new;
	return (*list);
}
