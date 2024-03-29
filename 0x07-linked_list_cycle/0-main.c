#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *current;
    listint_t *temp;
    int i;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 2);
    add_nodeint(&head, 4);
    add_nodeint(&head, 6);
    add_nodeint(&head, 8);
    add_nodeint(&head, 98);
    add_nodeint(&head, 99);
    add_nodeint(&head, 861);
    print_listint(head);

    if (check_cycle(head) == 0)
        printf("Cycle FREE suckah\n");
    else if (check_cycle(head) == 1)
        printf("CYCLE CITY, BAY BEE\n");
    
    head = NULL;
    add_nodeint(&head, 22);
    add_nodeint(&head, 1);
    add_nodeint(&head, 8);
    add_nodeint(&head, 90);
    add_nodeint(&head, 12);
    add_nodeint(&head, 98);
    add_nodeint(&head, 6);
    add_nodeint(&head, 754);
    print_listint(head);

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    temp = current->next;
    current->next = head;

    if (check_cycle(head) == 0)
        printf("Cycle FREE suckah\n");
    else if (check_cycle(head) == 1)
        printf("CYCLE CITY, BAY BEE\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    current->next = temp;

    free_listint(head);

    return (0);
}
