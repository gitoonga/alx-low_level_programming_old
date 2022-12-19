#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	size_t len = 0;
	char *p = s;
	char tmp;

    /**Calculate the length of the string*/
    while (*p != '\0')
    {
	len++;
	p++;
    }

    /** Swap the characters at the beginning and end of the string*/
    for (size_t i = 0; i < len / 2; i++)
    {
	tmp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = tmp;
    }
}

