#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: head of linked list
 * @index: integer of index
 * Return: 1 if succeeds or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *t;
	listint_t *h;

	t = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && t != NULL; i++)
		{
			t = t->next;
		}
	}

	if (t == NULL)
	{
		return (-1);
	}

	h = t->next;

	if (index != 0)
	{
		t->next = h->next;
		free(h);
	}
	else
	{
		free(t);
	}
	return (1);
}


