#include "main.c"

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
	int found_number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] == '+')
		{
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_number = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (found_number)
		{
			break;
		}
		i++;
	}
	return (sign * result);
}

