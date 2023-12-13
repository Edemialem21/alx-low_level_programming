

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int main(void){
    dlistint_t *head, *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));

    if (new == NULL){
        dprintf(2, "error: can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}