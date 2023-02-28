#include "main.h"

#include <limits.h>


/**
 * _atoi - convert a string to an integer
 *
 * @s: the string to convert
 *
 * Return: The integer value of the string
 *
 */

int _atoi(char *s)

{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\f' || s[i] == '\v')
	{
	i++;
	}
	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	sign = 1;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	int digit = s[i] - '0';

	if (result > (INT_MAX / 10))
	{
	return (sign == -1 ? INT_MIN : INT_MAX);
	}
	else if (result == (INT_MAX / 10))
	{
	if (sign == -1 && digit > 8)
	{
	return (INT_MIN);
	}
	else if (sign == 1 && digit > 7)
	{
	return (INT_MAX);
	}
	}
	result = result * 10 + digit;
	i++;
	}
	return (sign * result);
}
