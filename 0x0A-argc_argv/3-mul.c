#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: counts the number of arguments
 * @argv: an array of the string
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 2)
        {
        printf("Error\n");
        }
        return (1);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
