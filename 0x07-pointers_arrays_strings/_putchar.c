#include "main.h"

#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 * @c: the character to print
 *
 * Return: 1 on Success, -1 otherwise and is set appropriately
 *
 */

int _putchar(char c)

{
        return (write(1, &c, 1));
}
