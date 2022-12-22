#include "main.h"

/**
 *rot13 - a simple letter substitution cipher that
 *replaces a letter with the 13th letter after it in the alphabet. 
 *@s: String being encoded
 *Return: The encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = (s[i] - 'A' + 13) % 26 + 'A';
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] - 'a' + 13) % 26 + 'a';
		}
		i++;
	}
	return (s);
}
