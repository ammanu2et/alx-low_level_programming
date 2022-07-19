#include "lists.h"

/**
 * free_listint - realease the memory allocated for a list
 * @head: a pointer to the first node of the list to free
 */
void free_listint(listint_t *head)
{
if (head)
{
free_listint(head->next);
free(head);
}
}
