#include "lists.h"

/**
 * list_len - returns the numb of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
size_t wy;

wy = 0;
while (h != NULL)
{
h = h->next;
wy++;
}
return (wy);
}
