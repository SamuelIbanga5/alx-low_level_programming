#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Function that prints a name.
 * @name: Name to print.
 * @f: Function pointer to other function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
