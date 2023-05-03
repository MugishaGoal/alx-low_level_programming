#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @args: va_list containing the char to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list containing the int to print
 */
void print_int (va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing a float to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list containing a string to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0, j;
	print_func_t print_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (print_funcs[j].type)
		{
			if (print_funcs[j].type == format[i])
			{
				printf("%s", separator);
				print_funcs[j].print_func(args);
				
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
