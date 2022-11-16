#include "lists.h"

/**
 * print_dlistint_backward - prints list in reverse
 *
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t size = 0;

	const dlistint_t *curr = h;

	if (curr == NULL)
		return (0);

	while (curr->next)
	{
		curr = curr->next;
	}
	while (curr)
	{
		size++;
		printf("%d\n", curr->n);
		curr = curr->prev;
	}
	return (size);
}
