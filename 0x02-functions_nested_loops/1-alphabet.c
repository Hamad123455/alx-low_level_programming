#include "main.h"

/**
 * print_alphabet - print the lowercase alphabet on a line
 *
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
