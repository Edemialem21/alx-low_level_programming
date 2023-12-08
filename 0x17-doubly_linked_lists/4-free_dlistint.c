#include "lists.h"
/**
 * free_dlistint - functions that free a doubly linked list
 * @head: head pointer to the doubly liinked list
 * Return: returns 0 for success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
