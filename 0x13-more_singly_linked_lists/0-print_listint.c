#include "lists.h"

/**
 * print_listint - prints the elements of list.
 * @h: head of the list.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t numnodes = 0;

while (h != NULL)
{
printf("%d\n", h->num);
h = h->next;
numnodes++;
}
return (numnodes);
}
