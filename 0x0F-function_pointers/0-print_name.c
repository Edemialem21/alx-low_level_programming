#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: pointer to the variable name
 * @f: functions pointer to
 * Return: always success 0
 */
void print_name(char *name, void (*f)(char *)) {
    f(name);
}
