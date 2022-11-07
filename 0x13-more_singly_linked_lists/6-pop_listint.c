#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: singly linked list
 * Return: head nodes data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
