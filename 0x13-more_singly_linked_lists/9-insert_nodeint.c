#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @index: index
 * @n: data
 * Return: The address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	t = malloc(sizeof(listint_t));

	if (t == NULL)
		return (NULL);
	t->n = n;

	if (idx == 0)
	{
		t->next = *head;
		*head = t;
	}
	else
	{
		t->next = h->next;
		h->next = t;
	}
	return (t);
}

