#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of doubly linked list
 * @head: head pointer to the doubly liinked list
 * @index: the index of the intended node
 * Return: it returns the node of the intended index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int check = 0;

	ptr = head;
	if (head == NULL)
		return (NULL);
	while (check != index)
	{
		ptr = ptr->next;
		check++;
	}
	return (ptr);
}

