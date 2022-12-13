#include "customh.h"

/**
 * _isalpha - check if character is alphabetic
 * @c: character to check
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
