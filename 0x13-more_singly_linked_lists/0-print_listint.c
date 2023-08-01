#include "lists.h"

/**
 * print_listint - print all the ellemrnts 
 * @h: linked list of type list int 
 * @next: points to the next node
 * @node_count: it count the nood
 * Return: Number of nood
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
