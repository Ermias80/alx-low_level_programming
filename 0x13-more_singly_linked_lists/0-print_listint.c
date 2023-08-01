#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: integer
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
        printf("%d\n", h->n);
	h = h->next;
        node_count++;
    }

    return node_count;
}
