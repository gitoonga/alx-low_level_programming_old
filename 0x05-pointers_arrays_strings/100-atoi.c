#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 *
 * The number in the string can be preceded by an
 * infinite number of characters.
 * The function takes into account all the - and + signs before the number.
 * If there are no numbers in the string, the function returns 0.
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	/**Skip leading whitespace*/
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		       ||
		       s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}
	/**Check for sign*/
	if (s[i] == '+')
	{
		i++;
	}
	else if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	/**Convert digits to integer*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}

