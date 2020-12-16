#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts new node in a sorted linked list
 * @head: pointer to linked list
 * @number: integer value to be inserted with new node
 * Return: address of new node or NULL on failure
*/

listint_t *insert_node(listint_t **head, int number)
{
    if (number < 0)
        return (NULL);

    listint_t *new_node = NULL;
    
    new_node = malloc(sizeof(listint_t));

    listint_t *current = *head;

    if (!new_node)
        return (NULL);

    new_node->n = number;

    if (*head == NULL)
    {
        *head = new_node;
        new_node->next = NULL;
        return (new_node);
    }
    while (current->next != NULL && number > current->next->n)
    {
        current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
    return (new_node);
}
