#include <stdio.h>

/**
 * main - Entry point of the program written
 *
 * Description: Prints the name of the file it was compiled from,
 * followed by a new line
 * Return: Void
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
