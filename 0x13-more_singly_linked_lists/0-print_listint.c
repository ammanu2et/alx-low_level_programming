#include "lists.h"

/**
 * print_listint - prints the elements of list.
 * @h: head of the list.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t nnodes = 0;

if (h == NULL) return;
{
printf("%d", h->n);
h = h->next;
nnodes++;
}
return (nnodes);
}
