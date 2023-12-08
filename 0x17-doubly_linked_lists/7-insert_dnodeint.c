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
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *head;
	dlistint_t *temp2 = NULL;
	unsigned int check = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;
	if (head == NULL)
	{
		head = &new_node;
		return (new_node);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (check != idx - 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
	else
	{
		temp2 = temp->next;
		temp->next = new_node;
		temp2->prev = new_node;
		new_node->next = temp2;
		new_node->prev = temp;
	}
	return (new_node);
}
