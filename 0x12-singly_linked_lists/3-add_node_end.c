#include "lists.h"
/**
 * add_node_end - adds a node to the end of a list
 * @head: head of the linked list
 * @str: string to store in list
 * Return: address of end node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	size_t character;

	new = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);

	if (*head == NULL)
		*head = newnode;
	else
	{
		list_t *lastnode = *head;

		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;

	return (*head);
}
