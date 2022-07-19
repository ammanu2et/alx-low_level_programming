#include "lists.c"

/**
 * get_nodeint_at_index - removing the first item of a list.
 * @head: a pointer to the first node of the list
 * @index: number of index the list.
 * Return: value of a node index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node_index = head;

if (head == NULL)
{
return (0);
}

while (i < index)
{
if (head == NULL)
return (NULL);
node_index = head->next;
head = node_index;
++i;
}
return (node_index);
}
