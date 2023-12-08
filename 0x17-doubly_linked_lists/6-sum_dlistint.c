#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the doubly linked list nodes data
 * @head: head pointer to the doubly liinked list
 * Return: it returns the sum of the nodes data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;
	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

