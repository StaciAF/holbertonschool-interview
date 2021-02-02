#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: linked list given to check for cycle
 * Return: 1 (true) if cycle exists else 0 (false)
 */

int check_cycle(listint_t *list) {

    // checking addresses not values  -- does slow == fast
    // check if head is null return 0
    if list == NULL
        return (0);
    // slow mover = head - start at beginning
    listint_t *slow = list;
    // fast mover = head->next - start in front of slow
    listint_t *fast = list->next;
    // while slow != fast (move both) -- keep moving as long as the two dont equal each other (slow == fast)
    while (slow != fast)
    {
        // if fast or fast->next == null -- reached end of list
            // return 0 -- not a cycle
        if (fast == NULL || fast->next == NULL)
            return (0);
        // slow = slow->next (one at a time)
        // fast = fast->next->next (two at a time)
        slow = slow->next;
        fast = fast->next->next;
    }
    // return 1 -- is a cycle
    return (1); 
}
