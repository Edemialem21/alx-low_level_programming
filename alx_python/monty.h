#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/*the global variable pointer to the the stract  to the file ;
as stream and char for a line*/
/**
 * struct arg_s - struct that holds the variable
 * @stream: File that connects to the stream from file
 * @line: string which will be the line of text read from stream
 *
 * Description: hold variable that will be used in different functions of the project as well as variable s
 * that will require memory allocation and freein
 */
typedef struct arg_s
{
        char *line;
        FILE *stream;
} arg_t;
extern arg_t *arguments;




/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void validate_arguments(int argc);

#endif