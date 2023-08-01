#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int liv = 0;

	tp = h;
	while (tp)
	{
		liv++;
		tp = tp->next;
	}
	return (liv);
}
