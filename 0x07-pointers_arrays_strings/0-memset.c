#include "main.c"

/**
 *_memset - fill n bytes of memory with a constant value
 *@s: pointer to memory area
 *@b: constant value
 *@n: bytes to fill
 * Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int bts = n;

	if (bts > 0)
	{
		int i;

		for (i = 0; i < bts; i++)
			s[i] = b;
	}

	return (s);

}
