#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addtoEmpty(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp ->prev = NULL;
    temp ->data = data;
    temp ->next = NULL;
    head = temp;
    return head;
}
struct node *addToBeginning(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp ->prev = NULL;
    temp ->data = data;
    temp ->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return (head);
}

struct node *addToEnd(struct node *head, int data){

    struct node *temp, *ptr;
    temp = malloc(sizeof(struct node));
    temp ->prev = NULL;
    temp ->data = data;
    temp ->next = NULL;

    ptr = head;
    while (ptr -> next)
    {
        ptr = ptr ->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return (head);
}


struct node *addAfterPos(struct node *head, int data, int position){

    struct node *Newp = NULL;
    struct node *temp = head;
    struct node *temp2 = NULL;
    Newp = addtoEmpty(Newp, data);

    while (position != 1)
    {
        temp = temp->next;
        position--;
    }
    if (temp ->next == NULL)
    {
        temp->next = Newp;
        Newp->prev = temp;
    }
    else{
        temp2 = temp->next;
        temp->next = Newp;
        temp2->prev = Newp;
        Newp->next = temp2;
        Newp->prev = temp;
    }
    return (head);
}


int main(void){
    position = 2;
    struct node *head = NULL;
    struct node *ptr = NULL;
    
    head = addtoEmpty(head, 45);
        printf("%d\n", head->data);
        printf("\n");
    head = addToBeginning(head, 50);
    ptr = head;
    while (ptr != NULL)
    {
            printf("%d\n", ptr ->data);
            ptr = ptr -> next;
    }
    printf("\n");
    head = addToEnd(head, 21);
    ptr = head;
    while (ptr != NULL)
    {
            printf("%d\n", ptr ->data);
            ptr = ptr -> next;
    }
    return 0;
}