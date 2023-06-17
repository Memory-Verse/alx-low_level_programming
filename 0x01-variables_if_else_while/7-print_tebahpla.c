#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char ap;

	for (ap = 'z'; ap >= 'a'; ap--)
	{
		putchar(ap);
	}
	putchar('\n');
	return (0);
}
