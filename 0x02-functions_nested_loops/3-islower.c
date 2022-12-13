#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: The character being checked
 * Return: 0 if false 1 if true
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
