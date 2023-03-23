#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format:  a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	char *s;
	float f;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
	c = va_arg(args, int);
	printf("%c", c);
	break;

	case 'i':
	i = va_arg(args, int);
	printf("%d", i);
	break;

	case 'f':
	f = va_arg(args, double);
	printf("%f", f);
	break;

	case 's':
	s = va_arg(args, char *);
	if (s == NULL)
	printf("(nil)");
	else 
	printf("%s", s);
	break;

	default:
	i++;
	continue;
	}
	if (format[i + 1])
	printf(", ");
	i++;
	}
	printf("\n");
	va_end(args);
}