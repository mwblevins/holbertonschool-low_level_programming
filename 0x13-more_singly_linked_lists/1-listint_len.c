#include "lists.h"

/**
 * listinint_len - lists the length
 * @h: linked lists
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
