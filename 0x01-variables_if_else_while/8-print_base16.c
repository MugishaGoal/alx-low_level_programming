#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main -  Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{

	int n;
	char low;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (low = 'a'; low <= 'o'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
