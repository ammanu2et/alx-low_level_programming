#include "lists.h"

/**
 * listint_len - prints the number of elements in the list.
 * @h: hade of the list.
 * Return: the count value.
 */

size_t listint_len(const listint_t *h)
{
int count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
