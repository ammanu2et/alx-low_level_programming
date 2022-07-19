#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in the list.
 * @head: head of the list.
 *
 * Return: the sum of the list.
 */

int sum_listint(listint_t *head)
{
int sum;

sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);

}
