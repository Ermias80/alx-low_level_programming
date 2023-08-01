#include "lists.h"
/**
 * listint_len - print all the elements for linked list
 * @h: linked list of type list int print
 * Return: Number of nood
 */
size_t listint_len(const listint_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
h = h->next;
node_count++;
}
return (node_count);
}

