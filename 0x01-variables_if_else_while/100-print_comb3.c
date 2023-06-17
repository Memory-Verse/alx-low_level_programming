#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int p, t;

	for (p = 48; p <= 56; p++)
	{
		for (t = 49; t <= 57; t++)
		{
			if (t > p)
			{
				putchar(p);
				putchar(t);
				if (p != 56 || t != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
