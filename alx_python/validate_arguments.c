#include "monty.h"

/**
 * validate_arguments - Check the number of command line arguments.
 * @argc: Number of command line arguments
 */

void validate_arguments(int argc)
{
/* it check either no file path is provided or more than one argument is provided.*/
    if (argc == 2)
    {
        return;
    }
    /* to print the required string to stderr which has 2 as file descripter use dprintf.*/
    fprintf(stderr, "USAGE: monty file\n");
    /* dprintf(2, "USAGE: monty file\n");*/
    exit(EXIT_FAILURE);
}
