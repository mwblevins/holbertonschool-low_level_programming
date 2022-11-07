#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of list
 * @index: index of the node starting at 0
 * Return: node at index or NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}

	return (head);
}
