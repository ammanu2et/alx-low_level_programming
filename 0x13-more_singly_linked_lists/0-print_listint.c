#include "lists.h"

/**
 * print_listint - prints all the elements of list.
 * @h: name of the list.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
int numnodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
numnodes++;
}
return (numnodes);
}
