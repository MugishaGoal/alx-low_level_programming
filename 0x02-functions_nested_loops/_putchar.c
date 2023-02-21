#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 * @c: a character to print 
 * Result: 1 (Success)
 * On error, -1 is returned, and the error is set
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
