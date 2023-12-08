#include "lists.h"
/**
 * add_dnodeint - add a new nodes at the beginning in doubly linked list
 * @head: head pointer to the doubly liinked list
 * @n: the new data integer to be added
 *
 * Return: it returns the address of the new elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;
	if (head == NULL)
	{
		head = &temp;
		return (temp);
	}
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;
	return (temp);
}
