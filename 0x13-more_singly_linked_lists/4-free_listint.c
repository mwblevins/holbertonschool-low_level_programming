#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
