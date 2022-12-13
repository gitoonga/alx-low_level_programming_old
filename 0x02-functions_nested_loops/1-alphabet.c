#include "main.h"

/**
 *print_alphabet - prints lower case alphabet
 *Return void
 *
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}
