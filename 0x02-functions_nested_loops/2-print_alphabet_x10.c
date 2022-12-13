#include "main.h"

/**
 *print_alphabet_x10 - print the lower case alphabet 10 times
 *return void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}
		++i;
		_putchar('\n');
	}
}
