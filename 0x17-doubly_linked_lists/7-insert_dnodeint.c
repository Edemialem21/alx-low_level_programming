#include "lists.h"
/**
 * insert_dnodeint_at_index - add a new nodes at the idx in doubly linked list
 * @head: head pointer to the doubly liinked list
 * @n: the new data integer to be added
 * @idx: the postion where in the new node id inderted
 * Return: it returns the address of the new added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
	unsigned int check = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;
	if (head == NULL)
		return (new_node);
	if (idx == 0)
	{
		new_node->next = (*head);
		if((*head) != NULL)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		check++;
		if (check == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
		}
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
