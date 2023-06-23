#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int y, l;

	for (y = 0; y < 10; y++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l >= 10)
				_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
