#include "main.h"

/**
 * print_alphabet - Entry point that prints alphabets
 * Return:0
 */

void print_alphabet(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;

	}
	_putchar('\n');

}
