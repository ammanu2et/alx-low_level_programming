#include "lists.h"

/**
 * get_nodeint_at_index - removing the first item of a list.
 * @head: a pointer to the first node of the list
 * @index: ndex of the node.
 * Return: nth node. if node doesn't exist return null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head != NULL; i++)
{
head = head->next;
}

return (head);
}
