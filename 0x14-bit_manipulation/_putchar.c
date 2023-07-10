#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: a character to print
 *
 * Return: On success 1, On error return -1 and errno is
 * set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
