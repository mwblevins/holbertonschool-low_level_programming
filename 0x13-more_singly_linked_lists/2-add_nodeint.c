#include "lists.h"

/**
 * add_nodeint - adds node at the beginning
 * @head: node at the beginning
 * @n: value of the struct
 * Return: address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
