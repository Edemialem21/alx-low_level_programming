#include "monty"
/**
 * arguments_initialize - Pointer initialization for the node
 * to arg_s stracture 
*/
void arguments_initialize()
{
    arguments = malloc(sizeof(arg_t));
    if (arguments == NULL)
    {
        malloc_failed();
    }
    arguments->stream = NULL;
    arguments->line = NULL;
}