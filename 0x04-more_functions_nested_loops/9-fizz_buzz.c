#include "main.h"

#include <stdio.h>

/**
 * main - prints FizzBuzz program
 *
 * Return: 0 Succcess (Always)
 *
 */

int main(void)

{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if (x % 3 == 0 && x % 5 == 0)
	{
	printf("FizzBuzzz ");
	}
	else if (x % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (x % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
