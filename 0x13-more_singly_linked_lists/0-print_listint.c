#include "lists.h"
/**
 * print_listint - print all the elements for linked list
 * @h: linked list of type list int
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
return (node_count);
}
