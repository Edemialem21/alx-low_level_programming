#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at given index
 * @head: input pointer to head of dlistint_t list
 * @index: input index to delete node at, starting from 0
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	tmp = (*head);
	if (index == 0 && tmp != NULL)
	{
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL)
	{
		if (count == index)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);
}
