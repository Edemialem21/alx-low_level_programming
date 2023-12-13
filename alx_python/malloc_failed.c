#include "monty"
/**
 * malloc_failed - It takes the error when malloc fails
 * to allocate memory for the requested node
*/
void malloc_failed(void)
{
    dprintf(2, "Error: malloc failed\n");
    free_arguments();
    exit(EXIT_FAILURE);
}