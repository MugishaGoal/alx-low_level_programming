#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name given
 * @f: the function of name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
