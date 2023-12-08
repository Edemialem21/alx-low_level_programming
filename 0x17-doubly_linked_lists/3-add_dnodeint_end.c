#include "lists.h"
/**
 * add_dnodeint_end - add a new nodes at the end in doubly linked list
 * @head: head pointer to the doubly liinked list
 * @n: the new data integer to be added
 *
 * Return: it returns the address of the new elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;
	ptr = *head;

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
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
