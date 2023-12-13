#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1; //indicates the stack is empty


// Array implementation of stacks.

// we will have functions for different  ooperatio including push and pop
// almost every function reaquires the stackj_arr[] array
// instead of passing it to every function, the better option is to declare the stack_arr globally
/*void push(int data){
    if (top == MAX - 1){
        printf("stack overflow");
        return;
    }
    top = top + 1; 
    stack_arr[top] = data;
}

In the push() we were checking wherther a stack is full or not
we can use isFull() - to check whether a stack is full or not
if isFull() returns 1, then it indicates the stack is full.
*/
int isFull(){
    if (top == MAX - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data){
    if (isFull()){
        printf("Stack overflow");
        return;
    }
    top = top + 1; 
    stack_arr[top] = data;
}


// program to pop the elements from the stack array
// deleting is done by decremeting the top elemens by decreacing the top variable by 1
// isEmpty() - checks underflow of the stack
int isEmpty(){
    if (top == -1){
        return 1;
    }
    else{
        return 0; 
    }
}

int pop(){
    int value;
    // check the stack underflow condition
    if (isEmpty()){
        printf("Stack underflow");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}
int peek(){
    if (isEmpty()){
        printf("Stack underflow\n");
        exit (1);
    }
    return stack_arr[top];
}

void print_all(){
    int i;
    if (top == -1){
        printf("Stack underflow\n");
        return;
    }
    for (i = top; i >= 0; i--){
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main(){
    int data, choice;

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    // data = pop();
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is %d\n", data);
            break;
        case 3:
            printf("The top most element of the stack is %d\n", peek());
            break;
        case 4:
            print_all();
            push(data);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("wrong choice\n");
        }
    }
    return 0;
}


