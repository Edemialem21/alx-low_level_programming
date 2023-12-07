#include "lists.h"
/**
 * print_dlistint - print the doubly linked list
 * @h: head pointer to the doubly liinked list
 *
 * Return: it returns the numner of nodes prinded
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
