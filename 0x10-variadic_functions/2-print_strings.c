#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings followed by a new line
 * @separator: the input separators for the nulmbers
 * @n: the input argumentsl
 * Return: sucess always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list args;
        unsigned int i;
	char* str;

        va_start(args, n);

        for (i = 0; i < n; i++)
        {
		str = va_arg(args, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
                if (separator && i < n - 1)
                        printf("%s", separator);
        }
        printf("\n");
        va_end(args);
}
