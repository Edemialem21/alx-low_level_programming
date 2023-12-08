#include "lists.h"
/**
 * dlistint_len - returns the number of elements in doubly linked list
 * @h: head pointer to the doubly liinked list
 *
 * Return: it returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element = 0;
	dlistint_t *temp = (dlistint *)h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		element++;
	}
	return (element);
}

