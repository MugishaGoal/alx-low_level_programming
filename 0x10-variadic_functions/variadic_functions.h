#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print_func - A structure to store the print function
 * @type: A character representing the type of data
 * @func: A function pointer to the corresponding print function
 */
typedef struct print_func
{
	char type;
	void (*print_func)(va_list);
} print_func_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
