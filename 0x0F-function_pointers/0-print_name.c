#include"function_pointers.h"

/**
 * print_name - prtints the name
 * @name: name to print
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	f(name);
}
