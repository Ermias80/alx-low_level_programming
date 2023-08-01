#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;
while (h != NULL) 
{
        h = h->next;
        node_count++;
    }

    return node_count;
}
